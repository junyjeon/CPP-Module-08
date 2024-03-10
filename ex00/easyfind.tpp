#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == value)
            return it;
    }
    throw std::exception();
    // conntainer에서 value를 찾아서 반환

    // 발견되지 않으면 예외

    // associative containers -> 키{key: value}에 의해 직접 접근할 수 있는 컨테이너. map, set
    // sequence containers -> 순차적으로 데이터를 저장하는 컨테이너. vector, list, deque, array

    // iterator: ≒컨테이너 요소 순회용 포인터

    // 입력 반복자: 순차 읽기(++, *, ==, !=). 예: istream_iterator
    // 출력 반복자: 순차 쓰기(++, *). 예: ostream_iterator
    // 전진 반복자: 읽기/쓰기, 여러 번 순회(++, *, ==, !=). 예: forward_list
    // 양방향 반복자: 양방향 읽기/쓰기, 여러 번 순회(++, --, *, ==, !=). 예: list, set, map
    // 임의 접근 반복자: 배열처럼 직접 접근(++, --, *, ==, !=, +, -, [], <, <=, >, >=). 예: vector, deque, array
}
