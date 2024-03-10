#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span const &other) : _n(other._n), _v(other._v) {}

Span &Span::operator=(Span const &other)
{
    _n = other._n;
    _v = other._v;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (0 < _n)
    {
        _v.push_back(n);
        _n--;
    }
    else
    {
        throw std::exception();
    }
}

unsigned int Span::shortestSpan()
{
    if (_v.size() < 2)
    {
        throw std::exception();
    }
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    unsigned int min = std::numeric_limits<unsigned int>::max();
    for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; it++)
    {
        unsigned int diff = *(it + 1) - *it; // 해석: it + 1의 값에서 it의 값을 뺀다. *it는 it가 가리키는 값이다.
        if (diff < min)
        {
            min = diff;
        }
    }
    return min;
}

unsigned int Span::longestSpan()
{
    if (_v.size() < 2)
    {
        throw std::exception();
    }
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    return v.back() - v.front();
}