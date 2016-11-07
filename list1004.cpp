#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<int> data{};
    int x{};
    int count(0);
    // initialized to be empty
    // Read integers one at a time.
    while (std::cin >> x and count<3)
    {

    data.push_back(x);
    count++;
    if (count==3)
        break;
    }

    // Print the vector, one number per line.
    for (std::vector<int>::size_type i{0}, end{data.size()}; i != end; ++i)
    {
        std::cout << data.at(i);
        std::cout.fill (' ');
        std::cout.width (10);
        std::cout << data.at(i)*2;
        std::cout.fill(' ');
        std::cout.width (10);
        std::cout << data.at(i)*data.at(i);
        std::cout << "\n";
    }
}