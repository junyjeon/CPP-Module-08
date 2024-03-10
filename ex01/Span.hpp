#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;

public:
    Span();
    Span(unsigned int n);
    Span(Span const &);
    Span &operator=(Span const &);
    ~Span();

    void addNumber(int);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

template <typename T>
typename T::iterator easyfind(T &container, int value);

#endif // SPAN_HPP
