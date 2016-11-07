#include <algorithm>
#include <iostream>
#include <vector>

int main(){
	std::vector<int> data{};
	int x{};
	// initialized to be empty
	// Read integers one at a time.
	while (std::cin >> x)
	// Store each integer in the vector
	data.push_back(x);
	// Sort the vector
	std::sort(data.begin(), data.end());
	// Print the vector, one number per line.

	for (int element : data)
		std::cout << element << '\n';

}