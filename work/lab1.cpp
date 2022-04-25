#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char fr[80], rev[80], *p;
	int size=0, i, t;
	p=fr;
	
	cout<<"Enter: ";
	gets(fr);
	while (*p) size++;
	cout<<size;
	t=size-1;
	for (i=0; i<size; i++)
	{
		rev[t]=p[i];
		t--;
	}
		cout<<"Reverse: "<<rev;
		
		
		return 0;
	
}

