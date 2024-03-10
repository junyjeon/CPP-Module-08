#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack() : _container() {}

template <class T>
MutantStack<T>::MutantStack(MutantStack const &other) : _container(other._container) {}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other)
{
    if (this != &other)
        _container = other._container;
    return *this;
}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return _container.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return _container.end();
}

template <class T>
void MutantStack<T>::push(T value)
{
    _container.push_back(value);
}

template <class T>
void MutantStack<T>::pop()
{
    _container.pop_back();
}

template <class T>
T &MutantStack<T>::top()
{
    return _container.back();
}

template <class T>
size_t MutantStack<T>::size() const
{
    return _container.size();
}
