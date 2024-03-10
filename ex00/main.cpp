#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    try
    {
        std::cout << "Found: " << *easyfind(v, 5) << std::endl;
        std::cout << "Found: " << *easyfind(v, 11) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}