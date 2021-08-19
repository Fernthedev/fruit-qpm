/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FRUIT_CONFIG_BASE_H
#define FRUIT_CONFIG_BASE_H

/* #undef FRUIT_HAS_CLANG_ARBITRARY_OVERLOAD_RESOLUTION_BUG */
#define FRUIT_HAS_HAS_TRIVIAL_COPY 1
#define FRUIT_HAS_IS_TRIVIALLY_COPYABLE 1
#define FRUIT_HAS_MAX_ALIGN_T 1
#define FRUIT_HAS_STD_IS_TRIVIALLY_COPYABLE 1
#define FRUIT_HAS_STD_IS_TRIVIALLY_COPY_CONSTRUCTIBLE 1
#define FRUIT_HAS_STD_MAX_ALIGN_T 1
#define FRUIT_HAS_TYPEID 1
#define FRUIT_HAS_CONSTEXPR_TYPEID 1
#define FRUIT_HAS_CXA_DEMANGLE 1
/* #undef FRUIT_USES_BOOST */
#define FRUIT_HAS_ALWAYS_INLINE_ATTRIBUTE 1
/* #undef FRUIT_HAS_FORCEINLINE */
#define FRUIT_HAS_ATTRIBUTE_DEPRECATED 1
#define FRUIT_HAS_GCC_ATTRIBUTE_DEPRECATED 1
/* #undef FRUIT_HAS_DECLSPEC_DEPRECATED */
/* #undef FRUIT_HAS_MSVC_ASSUME */
#define FRUIT_HAS_BUILTIN_UNREACHABLE 1

#endif // FRUIT_CONFIG_BASE_H
