#include <iostream>
#include <vector>

//&data, means we are passing the reference of the vector which means pushing a new items will affect the original vector. if we only do `data` as parameter without &,it means we are passing by reference, where, the argument will be a copy of vector, this means if we push new items the it will not affect the original vector.

void print_array(std::vector<int> &data)
{
    data.push_back(300);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << '\t';
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4};
    print_array(numbers);
    print_array(numbers);
}