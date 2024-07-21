#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void play_the_game()
{
    int random = rand() % 251;
    cout << random << endl;
    int guess;
    while (true)
    {
        cout << "Enter your guess: " << endl;
        cin >> guess;
        if (guess == random)
        {
            cout << "Good job you win! " << guess << "and" << random << " matches corretly\n"
                 << endl;
            break;
        }
        else if (guess > random)
        {
            cout << "Too high, try again!";
        }
        else
        {
            cout << "Too low, Try again";
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit\n"
                  << "1. Play Game" << std::endl;
        cout << "Please enter you choice here: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks! for you time!" << endl;
            return 0;
        case 1:
            play_the_game();
            break;
        default:
            std::cout << "Please choice from the menu" << endl;
            break;
        }
    } while (choice != 0);
};