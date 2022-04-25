#include <iostream>

using namespace std;

int *p, m[10];

int main ()
{
	p=m;
	cout<<*(p+11);
	
	return 0;
}