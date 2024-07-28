#include <iostream>
#include <string>
#include <vector>

using std::string;

int main(int argc, char const *argv[])
{
    std::vector<string> countries = {"Rwanda", "Germany", "Ethiopia"};
    for (string country : countries)
    {
        std::cout << country << std::endl;
    }
    return 0;
}
