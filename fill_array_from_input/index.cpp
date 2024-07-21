#include <iostream>
#include <string>
#include <limits>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << '\t' << '\n';
    }
}

int main()
{
    const int SIZE = 100;
    int numbers[SIZE];
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Value or Quit(q/v):" << std::endl;
        if (std::cin >> numbers[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    print_array(numbers, count);
    std::cin.clear();
    // std::cin.ignore(1000, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string name;
    std::cout << "What is your name?";
    std::cin >> name;
    std::cout << name << " is your name." << std::endl;
}