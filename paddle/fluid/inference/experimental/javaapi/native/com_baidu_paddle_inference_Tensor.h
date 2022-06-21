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
/* Header for class com_baidu_paddle_inference_Tensor */
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Tensor_cppTensorDestroy(
    JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorReshape
 * Signature: (JI[I)V
 */
JNIEXPORT void JNICALL Java_com_baidu_paddle_inference_Tensor_cppTensorReshape(
    JNIEnv *, jobject, jlong, jint, jintArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorGetShape
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorGetShape(JNIEnv *, jobject,
                                                         jlong);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorGetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorGetName(JNIEnv *, jobject,
                                                        jlong);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyFromCpuFloat
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyFromCpuFloat(JNIEnv *,
                                                                 jobject, jlong,
                                                                 jfloatArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyFromCpuInt
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyFromCpuInt(JNIEnv *,
                                                               jobject, jlong,
                                                               jintArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyFromCpuLong
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyFromCpuLong(JNIEnv *,
                                                                jobject, jlong,
                                                                jlongArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyFromCpuByte
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyFromCpuByte(JNIEnv *,
                                                                jobject, jlong,
                                                                jbyteArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyFromCpuBoolean
 * Signature: (J[Z)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyFromCpuBoolean(
    JNIEnv *, jobject, jlong, jbooleanArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyToCpuFloat
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyToCpuFloat(JNIEnv *,
                                                               jobject, jlong,
                                                               jfloatArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyToCpuInt
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyToCpuInt(JNIEnv *, jobject,
                                                             jlong, jintArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyToCpuLong
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyToCpuLong(JNIEnv *, jobject,
                                                              jlong,
                                                              jlongArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyToCpuByte
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyToCpuByte(JNIEnv *, jobject,
                                                              jlong,
                                                              jbyteArray);

/*
 * Class:     com_baidu_paddle_inference_Tensor
 * Method:    cppTensorCopyToCpuBoolean
 * Signature: (J[Z)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_paddle_inference_Tensor_cppTensorCopyToCpuBoolean(JNIEnv *,
                                                                 jobject, jlong,
                                                                 jbooleanArray);

#ifdef __cplusplus
}
#endif
