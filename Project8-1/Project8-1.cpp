/*
* 
* 
* 
*/

#include <iostream>
#include <string>
#include<cstring>

using namespace std;

int countVowel(string str);

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << countVowel(input) << endl;
	}
	return 0;

}

int countVowel(string str) {

	int count = 0;

	for (int i = 0; i <= str.length(); i++) {

		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U') {
			count++;
		}
	}

	return count;
}