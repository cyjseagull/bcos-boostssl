/*
 *  Copyright (C) 2021 FISCO BCOS.
 *  SPDX-License-Identifier: Apache-2.0
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * @file Common.h
 * @author: octopus
 * @date 2021-06-14
 */

#pragma once

#ifndef BCOS_LOG  // #define LOG(level)  should be defined

#include <iostream>

#define FALT 6
#define ERROR 5
#define WARNING 4
#define INFO 3
#define DEBUG 2
#define TRACE 1

#define BCOS_LOG(l) std::cout << l
#define LOG_BADGE(_NAME) "[" << (_NAME) << "]"
#define LOG_DESC(_DESCRIPTION) (_DESCRIPTION)
#define LOG_KV(_K, _V) "," << (_K) << "=" << (_V)

#endif