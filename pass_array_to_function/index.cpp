#include <iostream>

void array_func(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int numbers[] = {87, 83, 90, 47, 34, 24};
    int size = sizeof(numbers) / sizeof(int);
    std::cout << "World!\n";
    array_func(numbers, size);
}