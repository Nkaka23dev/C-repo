#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// TODO: Ensure a user cannot choose a previously selected number unless they win or quit and restart the game.

void print_out(string out_value)
{
    cout << out_value << endl;
}

void print_array(int array[], int count)
{
    cout << "Possible number of trials: " << count << '\n';
    cout << "Below are all numbers you tried: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << '\t';
    }
    cout << '\n';
}

void play_game()
{
    int guesses[251]; // possible guesses
    int count_guess = 0;
    int guess;
    int random_number = rand() % 251;
    // cout << random_number << endl;
    print_out("Game start: ");
    while (true)
    {
        cin >> guess;
        guesses[count_guess++] = guess;
        if (guess == random_number)
        {
            print_out("You Win!");
            break;
        }
        else if (guess > random_number)
        {
            print_out("TOO HIGH!");
        }
        else
        {
            print_out("TOO LOW!");
        }
        cout << "" << endl;
    }
    print_array(guesses, count_guess);
}
int main()
{
    srand(time(NULL));
    int game_choice;
    cout << "Start or end the game: " << endl;
    while (game_choice != 0)
    {
        cout << "1. Play game\n"
             << "0. Quit" << endl;
        cin >> game_choice;
        switch (game_choice)
        {
        case 1:
            play_game();
            break;
        case 0:
            print_out("Game over!");
            return 0;
        default:
            print_out("Please choose between number 0 and 1!");
            break;
        }
    }
}