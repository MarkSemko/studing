#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	char fr[80], rev[80];
	int size=0;

	cout << "Enter: ";
	gets(fr);

	while(fr[size] != 0) {
		size++;
	}
	
	for(int i = 0, t=size-1; i < size; i++, t--) {
		rev[t] = fr[i];
	}

	cout << "Reverse: " << rev;
}