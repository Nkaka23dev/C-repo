## Run Project 

- Go into the directory you want to run. e.g `cd collections`
- Compile `index.cpp` file(It is the bootstrap file in all directories).
  `g++ index.cpp` or  `g++ index.cpp -std=c++11`
- After compiling, an `a.out` file will be generated
- In the same directory run `./a.out` in the terminal. 

### Guess Games:  

- guess_game_2 uses `array` while guess_game3 uses `vectors` and guess_game_4 uses `templatized array`

`array` vs `vectors` vs `templatized array`

| Array            | Vectors            |  Templatized array        
| -------------    |:-------------:     | :--------------------:
| Static           | dynamic            | static 
| decay to pointer | pass by value      | pass by value
| size is passed   | .size()            | .size()
| Not              |assign to other vars| assign to other vars



The fundamentals that C++ introduced, which other programming languages took advantage of, are OOP (Object-Oriented Programming) and Generic Programming [Array or List].

std: "This is a namespace."
A namespace is a group of code—namespaces help us to group our code and avoid name conflicts.
std refers to the standard namespace.

### USING NAMESPACE 1:

include <iostream>

int main() {
    std::cout << "Hello people, my name is Eric\n";
    return 0;
}
### USING NAMESPACE 2:

include <iostream>
using std::cout;

int main() {
    cout << "Hello people, my name is Eric\n";
    return 0;
}
### USING NAMESPACE 3:


include <iostream>
using namespace std; // Using directive

int main() {
    cout << "Hello people, my name is Eric\n";
    return 0;
}
2) Manipulators: Example: {endl}

3) printf:


`include <iostream>
using namespace std;

int main() {
    int slices = 7;
    // cout << "You have " << slices << " slices of pizza and burger" << std::endl;
    printf("%i\n", slices);
}`
## Data Types in C++

### Integral Types (integers):

- short: {2 bytes => 16 bits}
- int: {4 bytes, min 16 bits, max 32 bits}
- long: {8 bytes => 64 bits}
- long long: {64 bits, sometimes bigger}
- Unsigned Integral Types (for storing only positive integers):

- unsigned int
- unsigned short
- unsigned long
- unsigned long long
You can use the sizeof function to check how many bytes a datatype can store:

int main() {
    cout << sizeof(int);
}
In this example, you get the number 4, which means 4 bytes or 32 bits.

To check the maximum number an integral type can store, you can use:


cout << LONG_MAX << std::endl;
The value will be: 9223372036854775807

Char Type:

char: {1 byte => 8 bits}
The maximum number it can store is 127.
Escape Sequences:

\t -> for tabs
\b, \n
### Bool Type:


bool number_of_pizza = true;
cout << std::boolalpha << number_of_pizza << std::endl;
In the above code, I am using two manipulators, boolalpha and endl, which both come from the std namespace.

### Floating Point Types:
Floating points are not 100% trustworthy; they are sometimes not precise. In cases related to money, try to find a library or use integers. double is more trustworthy compared to float.

float: {4 bytes}
double: {8 bytes}
long double: {}
Constant Types:


### Constant and enum type 
define X 89
// Or
const int KPHONE = 7;
// Or
enum { y = 8 };
const is generally preferred.

#### In C++, we can use functions like floor, ceil, round, fmax, fmin, etc.

### Strings:
To use strings, include the <string> header. Strings work similarly to those in JavaScript or Python. We can also use C-style strings like this:


### char for strings
char name[] = "Nkaka";
cout << name << std::endl;
But C-style strings are limited and cannot be re-assigned.

Getting a String from Input:

include <iostream>
include <string>

using std::cin;
using std::cout;

int main() {
    std::string credentials;
    cout << "Please enter your name below: ";
    getline(std::cin, credentials);
    cout << credentials << std::endl;
}
Some methods on strings are: length(), size(), append(), insert(), erase(int, int), pop_back, replace(int, int, ""), substr(), find_first_of.

### Auto Type Deduction:

auto x = 5UL;
cout << x << std::endl;
The auto keyword allows the compiler to deduce the type of x but does not allow reassignment of x.

Printing and Converting Numbers:

int x = 87;
cout << std::oct << x << std::endl; // Octal
Printing Hexadecimal Numbers:


int x = 0x878;
cout << x << std::endl; // Hexadecimal
Printing Octal Numbers:


int x = 077;
cout << x << std::endl; // Octal
Loops:

Difference Between while and do-while Loops:
The do-while loop can be useful to write fewer lines of code. Here are examples demonstrating the difference:


std::string password = "Isheja1994";
std::string guess;
std::cout << "Guess the password: ";
cin >> guess;
while (password != guess) {
    std::cout << "Guess the password: ";
    cin >> guess;
}
std::cout << "Great! You guessed it!" << password << std::endl;
Using do-while:


std::string password = "Isheja1994";
std::string guess;
do {
    std::cout << "Guess the password: ";
    cin >> guess;
} while (password != guess);
std::cout << "Great! You guessed it!" << password << std::endl;
Three Main Parts of a Loop:

Initializer: int i = 0;
Condition: i < 10;
Update: i++;
The condition stops the loop; otherwise, it can run forever.

Feel free to ask if you need any more corrections or clarifications!









