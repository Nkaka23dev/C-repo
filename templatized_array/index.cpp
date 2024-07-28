#include <iostream>
#include <array>

void print_array(std::array<int, 20> data, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << '\t';
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, 20> numbers = {1, 2, 3, 4};
    print_array(numbers, 4);
}