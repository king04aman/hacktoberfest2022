 import firebase from "firebase";
 var firebaseConfig = {
    apiKey: "AIzaSyDZDOq6X-saaKIxLW7VhajK-WGNhXpdmIE",
    authDomain: "task-1-sparks-foundation.firebaseapp.com",
    projectId: "task-1-sparks-foundation",
    storageBucket: "task-1-sparks-foundation.appspot.com",
    messagingSenderId: "253115394781",
    appId: "1:253115394781:web:34250c374ec5ea654ec934"
  };

  const app = firebase.initializeApp(firebaseConfig);
  const db = firebase.firestore()
  const rtdb = firebase.database()
  const timestamp = firebase.firestore.FieldValue.serverTimestamp();
  export {db , app ,timestamp ,rtdb}