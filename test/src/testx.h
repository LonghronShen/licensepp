//
//  Bismillah ar-Rahmaan ar-Raheem
//
//  TestX 1.0.1
//  Single header, header only helper for creating test data
//
//  Copyright (c) 2017 Amrayn Web Services
//
//  This library is released under the MIT Licence.
//
//  https://github.com/amrayn/testx
//  https://amrayn.com
//  http://muflihun.com
//
#ifndef B08B253B_1699_4071_B26E_A8E1DCB37AB5
#define B08B253B_1699_4071_B26E_A8E1DCB37AB5

#include <tuple>
#include <vector>

namespace muflihun {
namespace testx {

template <typename... T>
using TestData = const std::vector<std::tuple<T...>>;

template <typename... T>
std::tuple<T...> TestCase(T... f) {
    return std::make_tuple(f...);
}

} // namespace testx
} // namespace muflihun

#endif /* B08B253B_1699_4071_B26E_A8E1DCB37AB5 */
