#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"

#endif // WHATEVER_HPP

/*
컨테이너 (벡터, 리스트, 맵, 셋),
#include <algorithm>
사용 가능.

헤더 필수 tpp 선택
*/