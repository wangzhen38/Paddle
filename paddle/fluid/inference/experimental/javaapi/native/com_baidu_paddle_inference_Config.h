// Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_baidu_paddle_inference_Config */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    cppConfigDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_cppConfigDestroy(
    JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    createCppConfig
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_com_baidu_paddle_inference_Config_createCppConfig(JNIEnv *, jobject);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    isCppConfigValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_isCppConfigValid(JNIEnv *, jobject,
                                                        jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    setCppModel
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_setCppModel(
    JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    setCppModelDir
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_setCppModelDir(
    JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    setCppProgFile
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_setCppProgFile(
    JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    setCppParamsFile
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_setCppParamsFile(
    JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    modelDir
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_baidu_paddle_inference_Config_modelDir(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    progFile
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_baidu_paddle_inference_Config_progFile(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    paramsFile
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_baidu_paddle_inference_Config_paramsFile(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    setCpuMathLibraryNumThreads
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Config_setCpuMathLibraryNumThreads(JNIEnv *,
                                                                   jobject,
                                                                   jlong, jint);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    cpuMathLibraryNumThreads
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_baidu_paddle_inference_Config_cpuMathLibraryNumThreads(JNIEnv *,
                                                                jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    enableMKLDNN
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Config_enableMKLDNN(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    mkldnnEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_mkldnnEnabled(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    enableMkldnnBfloat16
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Config_enableMkldnnBfloat16(JNIEnv *, jobject,
                                                            jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    mkldnnBfloat16Enabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_mkldnnBfloat16Enabled(JNIEnv *, jobject,
                                                             jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    enableUseGpu
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_enableUseGpu(
    JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    disableGpu
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Config_disableGpu(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    useGpu
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_useGpu(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    gpuDeviceId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_baidu_paddle_inference_Config_gpuDeviceId(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    memoryPoolInitSizeMb
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_com_baidu_paddle_inference_Config_memoryPoolInitSizeMb(JNIEnv *, jobject,
                                                            jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    fractionOfGpuMemoryForPool
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL
Java_com_baidu_paddle_inference_Config_fractionOfGpuMemoryForPool(JNIEnv *,
                                                                  jobject,
                                                                  jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    switchIrOptim
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_switchIrOptim(
    JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    irOptim
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_irOptim(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    switchIrDebug
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_switchIrDebug(
    JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    enableMemoryOptim
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_enableMemoryOptim(
    JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    memoryOptimEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_memoryOptimEnabled(JNIEnv *, jobject,
                                                          jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    enableProfile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Config_enableProfile(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    profileEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_paddle_inference_Config_profileEnabled(JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    disableGlogInfo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Config_disableGlogInfo(
    JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Config
 * Method:    summary
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_baidu_paddle_inference_Config_summary(JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
