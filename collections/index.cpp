#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    int numbers[20];
    int numbers_two[10] = {3, 4, 5, 6, 7};
    std::string guesses[] = {"Doe", "Lorem", "ipsum", "Stiitt", "Amet"}; // pre-defined array
    int size_one = sizeof(guesses) / sizeof(guesses[0]);
    int size_two = sizeof(guesses) / sizeof(std::string);

    for (int i = 0; i < size_two; i++)
    {
        std::cout << guesses[i] << std::endl;
    }

    cout << size_two << endl;
    guesses[0] = "Changed Value";
    std::cout << "Enter a string: ";
    std::cin >> guesses[1];
    std::cout << guesses[1] << std::endl;
    numbers[10] = 7899;
    cout << numbers[10] << endl;
};