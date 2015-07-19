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

namespace RMX
{
	public abstract class ASingleton<T> : MonoBehaviour 
	where T : MonoBehaviour {

		private static T _singleton = null;

		public static bool isInitialized {
			get {
				return _singleton != null;
			}
		}

		protected GameController gameController {
			get {
				return GameController.current;
			}
		}


		public static T current {
			get {
				if (isInitialized) {
					return _singleton;
				} else {
					return Initialize();
				}
			}
		}

		public static T Initialize() {
			if (isInitialized) 
				return _singleton;
			else {
				var aSingleton = new GameObject ().AddComponent<T> ();
				var parent = GameObject.Find("Singletons");
				if (!parent)
					parent = new GameObject("Singletons");
				aSingleton.gameObject.name = aSingleton.GetType().Name;
				aSingleton.transform.SetParent(parent.transform);
				return aSingleton;
			}
		}

		public static T Initialize(GameObject withParent) {
			if (isInitialized) 
				return _singleton;
			else {
				var aSingleton = new GameObject ().AddComponent<T> ();
				aSingleton.gameObject.name = aSingleton.GetType().Name;
				aSingleton.transform.SetParent(withParent.transform);
				return aSingleton;
			}
		}

		protected  T SetSingleton (T aSingleton)
		{
			_singleton = aSingleton;
			return _singleton;
		}

		protected  T GetSingleton() {
			return _singleton;
		}


		protected virtual void Awake() {
			if (GetSingleton() == null) {
				DontDestroyOnLoad (gameObject);
				SetSingleton(this as T);// as T;
				if (Bugger.WillTest(Testing.Singletons))
					Debug.Log("<color=green>CREATING ASingleton: </color> " + this.GetType().Name + ", Components in gameObject: " + gameObject.GetComponents<Component>().Length);
			} else if (GetSingleton() != this) {
				if (gameObject.GetComponents<Component>().Length <= 2) {// gameObject.name == this.GetType().Name &&
					if (Bugger.WillTest(Testing.Singletons))
						Debug.Log("<color=red>DELETING Singleton's GameObject: </color> " + this.GetType().Name + ", Components in gameObject: " + gameObject.GetComponents<Component>().Length);
					Destroy (gameObject);
				} else {
					if (Bugger.WillTest(Testing.Singletons))
						Debug.Log("<color=orange>DELETING ASingleton: </color> " + this.GetType().Name + ", Components in gameObject: " + gameObject.GetComponents<Component>().Length);
					Destroy(this);
				}
			}
		}

//		protected abstract T GetSingleton();
//
//		protected abstract T SetSingleton(T aSingleton);
	}
}
