#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char string[] = { "JGMXCIJPAINKALNTHQNMA" };
	int size = sizeof(string);
	sort(string, string + size);
	cout << "Result: ";
	
	for (char c : string) {
		cout << c << ' ';
	}
	return 0;
}