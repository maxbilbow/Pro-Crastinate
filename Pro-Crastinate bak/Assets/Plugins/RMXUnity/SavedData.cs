// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;

namespace RMX {
	
	public static class SavedData {

		static object String(string key) {
			return PlayerPrefs.HasKey(key) ? PlayerPrefs.GetString (key) : "";
		}
		
		static object Long(string key) {
			try {
				return PlayerPrefs.HasKey(key) ? (long) float.Parse(PlayerPrefs.GetString (key)) : (long) -1;
			} catch (System.Exception e){
				Debug.LogError(e);
				if (Bugger.WillLog(RMXTests.Exceptions,e.Message))
					Debug.Log(Bugger.Last);
				return (long) -1;
			}
		}

		static object Double(string key) {
			try {
				return PlayerPrefs.HasKey(key) ? (double) float.Parse(PlayerPrefs.GetString (key)) : (double) -1;
			} catch (System.Exception e){
				Debug.LogError(e);
				if (Bugger.WillLog(RMXTests.Exceptions,e.Message))
					Debug.Log(Bugger.Last);
				return (double) -1;
			}
		}

		const string TRUE = "True", FALSE = "False";

		public static T Get<T>(string key) 
		where T : System.IEquatable<T>
		{
			if (typeof(T) == typeof(bool))
				return (T) Bool (key);
			if (typeof(T) == typeof(float))
				return (T) Float (key);
			if (typeof(T) == typeof(int))
				return (T)Int (key);
			if (typeof(T) == typeof(long))
				return (T)Long (key);
			if (typeof(T) == typeof(double))
				return (T)Double (key);
			if (typeof(T) == typeof(string))
				return (T) String (key);
			throw new System.Exception (typeof(T).Name + " was not recognised");
		}

		public static T Get<T>(object key)
		where T : System.IEquatable<T> {
			var id = key is string ? (string) key : key.ToString();
			return Get<T> (id);

		}
		static object Bool(string key) {
			return PlayerPrefs.HasKey(key) && PlayerPrefs.GetString (key) == TRUE;
		}

		public static void Set(object key, bool value) {
			PlayerPrefs.SetString(key.ToString(), value ? TRUE : FALSE);
		}

		static object Int(string key) {
			try {
				return PlayerPrefs.HasKey(key) ? int.Parse(PlayerPrefs.GetString (key)) : (int) -1;
			} catch (System.Exception e){
				Debug.LogError(e);
				if (Bugger.WillLog(RMXTests.Exceptions,e.Message))
					Debug.Log(Bugger.Last);
				return (int) -1;
			}
		}

		public static void Set(object key, int value) {
			PlayerPrefs.SetString(key.ToString(), value.ToString());
		}


		public static object Float(string key) {
			try {
				return PlayerPrefs.HasKey(key) ? float.Parse(PlayerPrefs.GetString (key)) : (float) -1;
			} catch (System.Exception e){
				Debug.LogError(e);
				if (Bugger.WillLog(RMXTests.Exceptions,e.Message))
				    Debug.Log(Bugger.Last);
				return (float) -1;
			}
		}
		
		public static void Set(object key, float value) {
			PlayerPrefs.SetString(key.ToString(), value.ToString());
		}


	}
}
