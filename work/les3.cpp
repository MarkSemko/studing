#include <iostream>
#include <cstdio>
#include <clocale>
#include <cstdlib>
#include <math.h>

using namespace std;

char * inttoch (int input);

int main () {
	
	//задание 36
	printf ("Semko Mark");
	
	//задание 37
	printf ("%s", "\n\"C:\\Program Files\\llvm-mingw-20220323-msvcrt-x86_64\\include\\c++\\v1\"");
	
	//задание 38
	
	printf ("\nУнылая пора! Очей очарованье" 
								"\nПриятна мне твоя прощальная краса -"
								"\nЛюблю я пышное природы увяданье, "
								"\nВ багрец и золото одетые леса."
								"\nА.С. Пушкин");
								
	//задание 39
	float a, b, c;
	printf ("\nEnter a, b and c: ");
	scanf ("%f %f %f", &a, &b, &c);
	printf ("\na = %0.3f, b = %0.3f, c = %0.3f", a, b, c);
	
	//задание 40
	float h, l;
	cout << "\nEnter h and l: ";
	scanf ("%f %f", &h, &l);
	printf ("\nвысота = %0.3f, ширина = %0.3f", h, l);
	
	//задание 41
	printf ("\n%d, %d, %d", (int)a, (int)b, (int)c);
	
	//задание 42
	printf ("\n\n%d\n%d\n%d", (int)a, (int)b, (int)c);
	
	//задание 43
	fflush(stdin);
	char *x1, *x2;
	int i, j, k, n, main_buf, razr = 0;
	cout << "\n\nEnter fractional numbers x1 and x2 using '/': ";
	scanf ("%d/%d %d/%d", &i, &j, &k, &n);
	
	main_buf = i;
	for (; main_buf > 0; main_buf /= 10) {
		razr++;
	}
	x1 = inttoch(i); strcat(x1, "/"); strcat (x1, inttoch(j));
	main_buf = j;
	razr ++;
	
	main_buf = k;
	razr = 0;
	for (; main_buf > 0; main_buf /= 10) {
		razr++;
	}
	x2 = inttoch(k); strcat(x2, "/"); strcat(x2, inttoch(n));
	main_buf = n;
	razr++;
	
	printf ("\nx1 = %s, x2 = %s", x1, x2);
	
	return 0;
}

char * inttoch (int input) {
	
	char * output = new char[80];
	int count = 1;
	double buf_full, buf_frac, buf = (double)input;

	for (int i = 10; input >= i; i *= 10) {
		count++;
	}
	
	output[count] = '\0';
	
	do {
	buf_frac = modf (buf/10, &buf_full);
	cout << "\nTHERE FULL AND FRAC :: " << buf_full << " // " << buf_frac << endl;
	output[count-1] = round(buf_frac * 10) + 48;		
	buf = buf_full;
	count--;
	} while (count > 1);
	
	output[0] = buf_full + 48;	
	cout << "\nTHERE :: " << output << endl;
	
	return output;
}