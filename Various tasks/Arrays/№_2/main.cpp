#include <iostream>
#include <algorithm>
#include <ctime>

//-------------------------------------------------------------------------------------------------
int main()
{
    size_t size_a = 0;
    std::cin >> size_a;
 
    size_t size_b = 0;
    std::cin >> size_b;
 
    std::srand(std::time(nullptr));
 
    int** A = new int*[size_a];
    for (size_t i = 0; i < size_a; ++i)
    {
        *(A + i) = new int[size_b];
    }
 
    for (size_t i = 0; i < size_a; i++)
    {
        for (size_t j = 0; j < size_b; j++)
        {
            *(*(A + i) + j) = rand() % 5 + 1;
            std::cout << *(*(A + i) + j) << ' ';
        }
        std::cout << std::endl;
    }
 
    int product = 0;
 
    for (size_t i = 0; i < size_a; i++)
    {
        product += *(*(A + i) + i);
    }
    std::cout << product;
 
    for (size_t i = 0; i < size_a; ++i)
    {
        delete[] *(A + i);
    }
    delete[] A;
 
    return 0;
}
//-------------------------------------------------------------------------------------------------
