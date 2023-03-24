// Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.
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

#pragma once

#include "paddle/phi/backends/gpu/gpu_context.h"
#include "paddle/phi/core/dense_tensor.h"
#include "paddle/phi/core/kernel_registry.h"

namespace phi {

template <typename T, typename Context>
void FusedLinearParamGradAdd(const Context &ctx,
                             const DenseTensor &x,
                             const DenseTensor &dout,
                             const paddle::optional<DenseTensor> &dweight,
                             const paddle::optional<DenseTensor> &dbias,
                             bool multi_precision,
                             DenseTensor *dweight_out,
                             DenseTensor *dbias_out);

}  // namespace phi
