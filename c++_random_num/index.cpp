#include <iostream>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        std::cout << rand() % 21 << std::endl;
    }
    return 0;
}
