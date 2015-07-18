﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

namespace RMX
{
	class DataReader 
	{
		public const float variation = 0.2f;
		public const int csv_time = 2;
		public const int csv_text = 1;
		public const int csv_approved = 3;


		public static float TimeHMSToFloat(string time, char parser) {
			string[] hms = {"","",""};
			int i = 0;
			foreach (char c in time) {
				if (!char.IsDigit(c)) { //c == parser) {
					++i;
				} else {
					//					char.IsDigit
					hms[i] += c;
				}
			}
			float seconds = 0;
			try {
				seconds  = float.Parse (hms [2]);
				seconds += float.Parse(hms [1]) * 60;
				seconds += float.Parse(hms [0]) * 60 * 60;
			} catch (Exception e) {
				throw e;
			}
			return seconds;
			
		}
		
		//		private static float Min(float time) {
		//			return time * 0.9f;
		//		}
		//
		//		private static float Max(float time) {
		//			return time + 1.1f;
		//		}
		
		private static bool IsWithinTime(string time, float withinTime) {
			try {
				var seconds = TimeHMSToFloat (time, ':');
				var min = withinTime * (1 - variation) - 10;
				var max = withinTime * (1 + variation) + 10;
				//				Console.Write ("\n" + time + ", seconds: " + seconds + ", ");
				return seconds >= min && seconds < max;
			} catch (Exception e) {
				throw e;
			} 
		}
		
		private static List<List<string> > GetActivities(float inTime) {
//			Debug.Log (GameController.control.database.name);
			try {
				var reader = CsvReader.Read (GameController.current.database);
		
			
				var list = reader.FindAll(match => {
					try {
						if (match.Count > csv_approved && match[csv_approved] == "true") {
							return IsWithinTime(match[csv_time], inTime);
						} else {
							return false;
						}

					} catch (Exception e) {
						Debug.Log(e.Message);// + ": " + match[csv_time]);
						return false;
					}
				});
			return list;
			} catch  (Exception e) {
				throw e;
			}
			
		}

		public static List<string> GetActivityList(float forTime) {
			List<string> list = new List<string> ();
			try {
				foreach (List<string> thing in GetActivities(forTime)) {
					list.Add (thing[csv_text]);
				}
			} catch (Exception e) {
				Debug.Log(e.Message);
			}
			return list;
		}

	}
}