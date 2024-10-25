# Copyright (C) 2022 Jonathan Müller and clauf contributors
# SPDX-License-Identifier: BSL-1.0

cmake_minimum_required(VERSION 3.16.3)
project(clauf LANGUAGES CXX)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)

