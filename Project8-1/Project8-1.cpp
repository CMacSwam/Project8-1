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