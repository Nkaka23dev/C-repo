#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

// TODO: Iterators and other realted topics

int main(int argc, char const *argv[])
{
    std::vector<int> items = {1, 2, 3, 4};
    items.push_back(1000);
    cout << items[items.size() - 1] << std::endl;
    items.pop_back();
    cout << items.size() << std::endl;
    cout << "More methods about vectors::" << endl;
    cout << items.at(0) << endl;
    cout << items.front() << endl;
    cout << items.back() << endl;

    return 0;
}
