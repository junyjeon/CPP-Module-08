#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
private:
    std::vector<T> _container;

public:
    MutantStack();
    MutantStack(const MutantStack &);
    MutantStack &operator=(const MutantStack &);
    ~MutantStack();

    typedef typename std::vector<T>::iterator iterator;

    iterator begin();
    iterator end();

    void push(T);
    void pop();
    T &top();
    size_t size() const;
};

#include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP