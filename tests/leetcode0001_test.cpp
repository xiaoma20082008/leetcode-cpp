/*
 * File: leetcode0001_test.cpp
 * Project: tests
 * File Created: 2023-03-09
 * Author: xiaoma20082008 (mmccxx2519@gmail.com)
 *
 * ------------------------------------------------------------------------
 * Last Modified At: 2023-03-09 23:21:25
 * Last Modified By: xiaoma20082008 (mmccxx2519@gmail.com>)
 * ------------------------------------------------------------------------
 *
 * Copyright (C) xiaoma20082008. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "leetcode0001.hpp"
#include <gtest/gtest.h>

using namespace leetcode;

TEST(Leetcode0001Test, twoSum) {
  EXPECT_EQ(42, 7 * 6);
  EXPECT_STRNE("hello", "world");
  Solution0001 s0001{};
  vector<int> v{1, 2, 3};
  vector<int> ret = s0001.twoSum(v, 7);
  vector<int> exp = {};
  EXPECT_EQ(exp, ret);
}
