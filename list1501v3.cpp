#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<string, int> counts;
	string word;

	while(cin >> word)
	{
		++counts[word];
	}

	for(const auto &elem: counts)
	{
		cout << "Palavra: " << elem.first << "] = " << elem.sencond << "\n";
	}
}
