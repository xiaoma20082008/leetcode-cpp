/*
 * File: main.cpp
 * Project: src
 * File Created: 2023-03-08
 * Author: xiaoma20082008 (mmccxx2519@gmail.com)
 *
 * ------------------------------------------------------------------------
 * Last Modified At: 2023-03-08 20:06:21
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
#include "leetcode0002.hpp"

#include <iostream>
using namespace leetcode;
using namespace std;

int main(int argc, char **argv) {
  std::cout << "hello wrold!\n";
  Solution0001 s0001{};
  std::vector<int> v{2, 7, 11, 15};
  auto ret1 = s0001.twoSum(v, 9);

  Solution0002 s0002{};
  auto ret2 = s0002.addTwoNumbers(nullptr, nullptr);
  return 0;
}