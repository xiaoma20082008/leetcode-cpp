# 
# File: CMakeLists.txt
# Project: leetcode-cpp
# File Created: 2023-03-07
# Author: xiaoma20082008 (mmccxx2519@gmail.com)
# 
# ------------------------------------------------------------------------
# Last Modified At: 2023-03-07 23:17:17
# Last Modified By: xiaoma20082008 (mmccxx2519@gmail.com>)
# ------------------------------------------------------------------------
# 
# Copyright (C) xiaoma20082008. All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     https://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# 

cmake_minimum_required(VERSION 3.0.0)
project(leetcode-cpp VERSION 0.1.0)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(third_party)
add_subdirectory(src)
add_subdirectory(tests)
