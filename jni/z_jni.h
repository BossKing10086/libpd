/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_puredata_core_PdBase */

#ifndef _Included_org_puredata_core_PdBase
#define _Included_org_puredata_core_PdBase
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_puredata_core_PdBase
 * Method:    clearSearchPath
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_clearSearchPath
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    addToSearchPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_addToSearchPath
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    setReceiver
 * Signature: (Lorg/puredata/core/PdReceiver;)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_setReceiver
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    setMidiReceiver
 * Signature: (Lorg/puredata/core/PdMidiReceiver;)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_setMidiReceiver
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    openAudio
 * Signature: (IIILjava/util/Map;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_openAudio
  (JNIEnv *, jclass, jint, jint, jint, jobject);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    implementsAudio
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_puredata_core_PdBase_implementsAudio
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    audioImplementation
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_puredata_core_PdBase_audioImplementation
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    suggestSampleRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_suggestSampleRate
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    suggestInputChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_suggestInputChannels
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    suggestOutputChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_suggestOutputChannels
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    closeAudio
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_closeAudio
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    startAudio
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_startAudio
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    pauseAudio
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_pauseAudio
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    isRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_puredata_core_PdBase_isRunning
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendBang
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendBang
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendFloat
 * Signature: (Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendFloat
  (JNIEnv *, jclass, jstring, jfloat);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendSymbol
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendSymbol
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    exists
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_puredata_core_PdBase_exists
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    arraySize
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_arraySize
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendNoteOn
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendNoteOn
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendControlChange
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendControlChange
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendProgramChange
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendProgramChange
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendPitchBend
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendPitchBend
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendAftertouch
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendAftertouch
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendPolyAftertouch
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendPolyAftertouch
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendMidiByte
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendMidiByte
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendSysex
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendSysex
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    sendSysRealTime
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_sendSysRealTime
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    pollPdMessageQueue
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_pollPdMessageQueue
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    pollMidiQueue
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_pollMidiQueue
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    blockSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_blockSize
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    processRaw
 * Signature: ([F[F)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_processRaw
  (JNIEnv *, jclass, jfloatArray, jfloatArray);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    process
 * Signature: (I[S[S)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_process__I_3S_3S
  (JNIEnv *, jclass, jint, jshortArray, jshortArray);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    process
 * Signature: (I[F[F)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_process__I_3F_3F
  (JNIEnv *, jclass, jint, jfloatArray, jfloatArray);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    process
 * Signature: (I[D[D)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_process__I_3D_3D
  (JNIEnv *, jclass, jint, jdoubleArray, jdoubleArray);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_initialize
  (JNIEnv *, jclass);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    openFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_puredata_core_PdBase_openFile
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_closeFile
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    getDollarZero
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_getDollarZero
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    startMessage
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_startMessage
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    addFloat
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_addFloat
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    addSymbol
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_addSymbol
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    finishList
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_finishList
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    finishMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_finishMessage
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    readArrayNative
 * Signature: ([FILjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_readArrayNative
  (JNIEnv *, jclass, jfloatArray, jint, jstring, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    writeArrayNative
 * Signature: (Ljava/lang/String;I[FII)I
 */
JNIEXPORT jint JNICALL Java_org_puredata_core_PdBase_writeArrayNative
  (JNIEnv *, jclass, jstring, jint, jfloatArray, jint, jint);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    bindSymbol
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_puredata_core_PdBase_bindSymbol
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_puredata_core_PdBase
 * Method:    unbindSymbol
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_puredata_core_PdBase_unbindSymbol
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
