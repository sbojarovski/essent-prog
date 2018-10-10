//
// Created by stefan on 10/7/18.
//

#ifndef GENERIC_STATIC_ASSERT_EXAMPLE_H
#define GENERIC_STATIC_ASSERT_EXAMPLE_H

#include <type_traits>


// https://stackoverflow.com/a/25216349/401043


template<typename...>
struct void_ {
    using type = void;
};

template<typename... Args>
using Void = typename void_<Args...>::type;

template<typename T, typename = void>
struct has_const_iterator : std::false_type {};

template<typename T>
struct has_const_iterator<T, Void<typename T::const_iterator>> : std::true_type {};

struct has_begin_end_impl {
    template<typename T, typename Begin = decltype(std::declval<const T&>().begin()),
            typename End   = decltype(std::declval<const T&>().end())>
    static std::true_type test(int);
    template<typename...>
    static std::false_type test(...);
};

template<typename T>
struct has_begin_end : decltype(has_begin_end_impl::test<T>(0)) {};

template<typename T>
class observable_list {
    static_assert(has_const_iterator<T>::value, "Must have a const_iterator typedef");
    static_assert(has_begin_end<T>::value, "Must have begin and end member functions");
    // code here...
};

#endif //GENERIC_STATIC_ASSERT_EXAMPLE_H
