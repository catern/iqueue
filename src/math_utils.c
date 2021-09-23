/*
 *    Copyright 2021 Two Sigma Open Source, LLC
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#include "math_utils.h"
uint8_t
ceilintlog2(uint64_t value)
{
    uint8_t deg = 0;
    uint64_t pow2 = 1;
    while (pow2 < value) {
	++deg;
	pow2 <<= 1;
    }
    return deg;
}

uint64_t
ceilintpow2(uint64_t value)
{
    uint64_t pow2 = 1;
    while (pow2 < value) {
	pow2 <<= 1;
    }
    return pow2;
}
