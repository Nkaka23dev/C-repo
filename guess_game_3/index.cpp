#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void print_array(std::vector<int> guesses)
{
    cout << "Here are guesses you tried = [";
    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << ",";
    }
    cout << "]\n";
    cout << endl;
}

void play_game()
{
    const int MAX_SIZE = 201;
    int random_number = rand() % MAX_SIZE;
    std::vector<int> vectors;
    cout << "Answer: " << random_number << endl;
    int user_choice_number;
    while (true)
    {
        cin >> user_choice_number;

        vectors.push_back(user_choice_number);
        if (vectors.size() > 5)
        {
            cout << "You can not exceed 5 guesses\n";
            break;
        }
        if (user_choice_number == random_number)
        {
            cout << "CONGRATURATION! YOU WIN.\n";
            break;
        }
        else if (user_choice_number > random_number)
        {
            cout << "Too high" << endl;
        }
        else
        {
            cout << "too low" << endl;
        }
    }
    print_array(vectors);
};

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int choice;
    while (choice != 0)
    {
        cout << "0. Quit game\n"
             << "1. Play game" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            play_game();
            break;
        case 0:
            cout << "Bye, you can come back anytime" << endl;
            return 0;
        default:
            cout << "Please choose between 0 and 1" << endl;
            break;
        }
    }
}
