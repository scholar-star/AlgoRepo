#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> cards;

	while (true) {
		string s;
		cin >> s;
		if (cin.eof()) break;
		cards.push_back(stoi(s));
	}
	
	int missing[2];
	int index = 0;	
	for (int i = 1; i <= n; i++) {
		if (std::find(cards.begin(), cards.end(), i)==cards.end()) {
			missing[index] = i;
			index += 1;
		}
	}

	for (int miss : missing) {
		if(miss>=1 && miss<=n)
			std::cout << miss << std::endl;
	}
}