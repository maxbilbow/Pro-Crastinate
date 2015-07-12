﻿using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;


namespace RMX {
	public class GameCenter : MonoBehaviour {


		public static void Authenticate() {
			GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);
			Social.localUser.Authenticate (success => {
				if (success) {
					Debug.Log ("Authentication successful");
					string userInfo = "Username: " + Social.localUser.userName + 
						"\nUser ID: " + Social.localUser.id + 
							"\nIsUnderage: " + Social.localUser.underage;
					Debug.Log (userInfo);
				}
				else
					Debug.Log ("Authentication failed");
			});

		}

		public static void ReportScore (long score, UserData data) {
			string leaderboardID = GameData.GetID (data);
//			long score = (long) scoref * 100;
			Debug.Log ("Reporting score " + score + " on leaderboard " + leaderboardID);
			Social.ReportScore (score, leaderboardID, success => {
				Debug.Log(success ? "Reported score successfully" : "Failed to report score");
			});
		}



		public static bool UpdateAchievement(UserData data, float score) {
			bool completed = false;
			string achievementID = GameData.GetID (data);
			Social.LoadAchievements (achievements => {
				if (achievements.Length > 0) {
//					Debug.Log ("Got " + achievements.Length + " achievement instances");
//					string myAchievements = "My achievements:\n";
					foreach (IAchievement achievement in achievements) {
						if (achievement.id == achievementID) {
							completed = achievement.completed;
						}
					}
//					Debug.Log (myAchievements);
				} else
					Debug.Log ("No achievements returned");
			});
			if (completed) {
				return true;
			} else {
				double progress;
				switch (data) {
				case UserData.AmeteurCrastinator:
					progress = GameData.totalTime * 100 / 30;
					break;
				case UserData.TimeWaster:
					progress = GameData.totalTime * 100 / (5 * 60);
					break;
				case UserData.SemiPro:
					progress = GameData.totalTime * 100 / (60 * 60);
					break;
				case UserData.Apathetic:
					progress = GameData.totalTime * 100 / (3 * 60 * 60);
					break;
				case UserData.Pro:
					progress = GameData.totalTime * 100 / GameData.devTimeWasted;
					break;
				case UserData.MakingTime:
					progress = 100;
					break;
				default:
					return false;
				}
				if (progress > 100) progress = 100;
//				#ifUNITY_IPHONE
//				[DllImport("__Internal")]
//				private static extern void _ReportAchievement( string achievementID, float progress );
//				
//				#else
				//#ifUNITY_ANDROID
				Social.ReportProgress (achievementID, progress, result => {
					Debug.Log (GameData.GetKey(data) + ": " + progress + ", result: " + result);
					if (result) {
						completed = true;
						Debug.Log("Achievement Success");

					} else {
						completed = false;
						Debug.Log("Achievement Failed to report");
					}
				});
//				#endif

				return completed;
			}

		}

			/*
		public static GameCenter gameKit;

		void Awake() {
			if (gameKit == null) {
				DontDestroyOnLoad (gameObject);
				gameKit = this;
			} else if (gameKit != this) {
				Destroy (gameObject);
			}
		}

		
		// Use this for initialization
		void Start () {

		}
		
		// Update is called once per frame
		void Update () {
		
		}

		//
		// Properties
		//
		private User _user = new User();
		public ILocalUser localUser
		{
			get {
				return _user;
			}
		}
		
		//
		// Methods
		//
		public void Authenticate (ILocalUser user, Action<bool> callback){

		}
		
		public IAchievement CreateAchievement () {
			return null;
		}
		
		public ILeaderboard CreateLeaderboard () {
			return null;
		}
		
		public bool GetLoading (ILeaderboard board) {
			return false;
		}
		
		public void LoadAchievementDescriptions (Action<IAchievementDescription[]> callback) {
			
		}
		
		public void LoadAchievements (Action<IAchievement[]> callback) {
			
		}
		
		public void LoadFriends (ILocalUser user, Action<bool> callback) {
			
		}
		
		public void LoadScores (ILeaderboard board, Action<bool> callback) {
			
		}
		
		public void LoadScores (string leaderboardID, Action<IScore[]> callback) {
			
		}
		
		public void LoadUsers (string[] userIDs, Action<IUserProfile[]> callback) {
			
		}
		
		public void ReportProgress (string achievementID, double progress, Action<bool> callback) {
			
		}
		
		public void ReportScore (long score, string board, Action<bool> callback) {
			
		}
		
		public void ShowAchievementsUI () {
			
		}
		
		public void ShowLeaderboardUI () {
			
		}
		*/
	}
}