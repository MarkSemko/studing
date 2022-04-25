#include <iostream>
#include <cstdio>

using namespace std;

char* cut (int x, int y, char *n);

int main(int argc, char *argv[]) {
	
	char *str, buf[80];
	
	if (argc < 4) {
		cout << "Invalid number of arguments" << endl;
		return 0;
	}
	
	
	str = argv[1];
	int start = atoi (argv[2]);
	int end = atoi (argv[3]);
	
	bool is_zero = strcmp(argv[2], "0");
	
	
	if ((start == 0 && is_zero == true) || end == 0) {
		cout << "We need the number and both of this must be over zero!" << endl;
		return 0;
	}
	
	
	char* cstr = cut(start, end, str);
	
	cout << "There your new text: " << cstr << endl;
	
	delete[] cstr;
	return 0;
	
}

char* cut (int x, int y, char *n) {
	
	int len;
	
	len = strlen(n);
	
	char *tmp = new char[y - x + 2];
	
	for (int i = 0, j = x - 1; i <= y - x; i++, j++) {
				tmp[i] = n[j];	
		}
	
	tmp[y - x + 1] = '\0';
	
	return tmp;
	
}
	
	
	
	

	
	