#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<int> data{};
    int x{};
    // initialized to be empty
    // Read integers one at a time.
    while (std::cin >> x)
    {

    data.push_back(x);
    if (data.size() == 3)
    	break;
    }

    // Print the vector, one number per line.
    int i(0); 
    for (std::vector<int>::iterator it = data.begin() ; it != data.end(); ++it, ++i)
    {
        std::cout << data.at(i);
        std::cout.fill (' ');
        std::cout.width (4);
        std::cout << data.at(i)*2;
        std::cout.fill(' ');
        std::cout.width (4);
        std::cout << data.at(i)*data.at(i);
        std::cout << "\n";
    }
}
