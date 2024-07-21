#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> items = {1, 2, 3, 4};
    items.push_back(1000);
    cout << items[items.size() - 1] << std::endl;
    items.pop_back();
    cout << items.size() << std::endl;
    return 0;
}
