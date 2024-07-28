#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::ofstream file("fs_stream.txt");
    std::vector<std::string> cities;
    cities.push_back("Kigali");
    cities.push_back("Bujumbura");
    cities.push_back("Kampala");
    for (std::string city : cities)
    {
        file << city << std::endl;
    }
    file.close();
    return 0;
}
