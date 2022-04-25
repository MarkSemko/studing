#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void reverse (char **n);

int main() {

	char str[80], *p;
	
	cout << "Enter text: ";
	gets(str);
	p = str;
	
	cout << "sizeof(inputString): " << sizeof(char*) << endl;
	cout << "Memory address before: " << &str << ", " << &p << endl;
	cout << *p << endl;
	cout << p[2] << endl;
	
	reverse (&p);
	
	cout << "Reverse: " << p;	
	
	return 0;
}

void reverse (char **n) {
	
	char x, y;	
	int len = strlen(*n);
	
	printf("show n as stirng %s\n",*n);
    printf("show n as pointer %p\n",*n);
    printf("show n as character %c\n", **n);
	
	cout << "Size of the text: " << len << endl;
	cout << "Memory address in function: " << *n << ", " << n << endl;
	cout << *(*n + 1) << endl;
	for (int i = 0, j = len - 1; i <= len/2; i++, j--) {
		cout << i << ", " << j << '\n';
		cout << (*n)[i] << ", " << (*n)[j] << '\n';
		x = (*n)[j];
		(*n)[j] = (*n)[i];
		(*n)[i] = x;
	}
	return;
}