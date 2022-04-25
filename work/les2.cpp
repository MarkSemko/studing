#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main () {
	
	float x = -1.5;
	cout << "x = " << x << endl;
	
	int summa = 0;
	cout << "\nsumma = " << summa << endl;
	
	int n = 1, answer;
	while (answer) {
		cout << "\nn = " << n << endl;
		n++;
		cout << "Increase? (1 - yes, 0 - no)" << endl;
		cin >> answer;
	}
	
	answer = 1;
	int counter = 1000;
	while (answer) {
		cout << "\ncounter = " << counter << endl;
		counter = counter - 2;
		cout << "Decrease? (1 - yes, 0 - no)" << endl;
		cin >> answer;
	}
	
	float x1, x2;
	cout << "\nEnter x1 and x2: " << endl;
	cin >> x1 >> x2;
	cout << "Average = " << (x1 + x2)/2 << endl;
	
	float y = -2.7 * pow (x, 3) + 0.23 * pow (x, 2) - 1.4;
	cout << "y = " << y << endl;
	
	float dx;
	answer = 1;
	cout << "\nEnter delta: ";
	cin >> dx;
	while (answer) {
		cout << "x = " << x << ".\nIncrease? (1 - yes, 0 - no)" << endl;
		cin >> answer;
		if (answer == 1) {
			x += dx;
			cout << "Now x = " << x << endl;
		}
	}
	
	float lb, kg;
	cout << "\nEnter mass in lb: ";
	cin >> lb;
	kg = lb * 0.4059;
	cout << "This mass in kg: " << kg << endl;
	
	float verst, km;
	cout << "\nEnter the distance in km: ";
	cin >> km;
	verst = km/1.0668;
	cout << "This distance in verst: " << verst << endl;
	
	int point;
	float a, b, r1, r2, h, s, v, local, pi = 3.14;
	
	answer = 1;

	
	while (answer) {
		cout << "\nThe square and volume of which geometric figure we will calculate?"
				"\n1. rectangle"
				"\n2. triangle"
				"\n3. trapezoid"
				"\n4. circle"
				"\n5. cylindre"
				"\n6. parallelepiped"
				"\n7. sphere"
				"\n8. empty cylindre"
				"\n9. cone"
				"\n0. exit"
				"\n\nYour choise: ";
		cin >> point;
		switch (point) {
						
			case 1:
				cout << "\nEnter sides of the rectangle: ";
				cin >> a >> b;
				s = a * b;
				cout << "\n The square of this rectangle is: " << s << endl;
				break;
			
			case 2:
				cout << "Enter base and height of the triangle: ";
				cin >> a >> h;
				s = a * h * 0.5;
				cout << "The square of this triangle is: " << s << endl;
				break;
			
			case 3:
				cout << "Enter height and both of bases of the trapezoid: ";
				cin >> h >> a >> b;
				s = (a + b) * 0.5 * h;
				cout << "The square of this trapezoid is: " << s << endl;
				break;
			
			case 4:
				cout << "Enter radius of the circle: ";
				cin >> r1;
				s = pi * pow(r1, 2);
				cout << "The square of this circle is: " << s << endl;
				break;
				
			case 5:
				cout << "Enter radius and height of the cylindre: ";
				cin >> r1 >> h;
				s = 2 * pi * r1 * (h + r1);
				v = pi * pow(r1, 2) * h;
				cout << "The square and volume of this cylindre is: " << s << ", " << v << endl;
				break;
				
			case 6:
				cout << "Enter length, width and height of the parallelepiped: ";
				cin >> a >> b >> h;
				s = 2 * (a * b + a * h + b * h);
				v = a * b * h;
				cout << "The square and volume of this parallelepiped is: " << s << ", " << v << endl;
				break;
				
			case 7:
				cout << "Enter radius of the sphere: ";
				cin >> r1;
				s = 4 * pi * pow(r1, 2);
				v = 0.75 * pi * pow(r1, 3);
				cout << "The square and volume of this sphere is: " << s << ", " << v << endl;
				break;
			
			case 8:
				cout << "Enter inner and outer radiuses and height of the empty cylindre: ";
				cin >> r1 >> r2 >> h;
				if (r1 < r2) {
					local = r1;
					r1 = r2;
					r2 = local;
				}
				s = 2 * pi * (r1 * h + pow(r1, 2) - pow(r2, 2));
				v = pi * h * (pow(r1, 2) - pow(r2, 2));
				cout << "The square and volume of this cylindre is: " << s << ", " << v << endl;
				break;
				
			case 9:
				cout << "Enter radius and height of the cone: ";
				cin >> r1 >> h;
				s = pi * r1 * (sqrt(pow(r1, 2) + pow(h, 2)) + r1);
				v = pi * pow(r1, 2) * h / 3;
				cout << "The square and volume of this cone is: " << s << ", " << v << endl;
				break;
				
			case 0:
				answer = 0;

		}
	}
	
	char buf[80];
	
	while (true) {
		
		cout << "Enter what electric data we know (I, U or R): ";
		fflush(stdin); //очищаем буффер ввода
		char *electric = fgets (buf, 80, stdin);
		cout << electric;
		int z = 0;
		for (int i = 0; i < 10; i++) {
			if (electric[i] == 'I') {
				z += 100;
			}
			if (electric[i] == 'U') {
				z += 10;
			}
			if (electric[i] == 'R') {
				z += 1;
			}
		}
		
		float I, U, R;
		
		switch (z) {
			
			case 111:
				cout << "We know all electric data." << endl;
				return 0;
			
			case 110:
				cout << "Enter I and U: ";
				cin >> I >> U;
				R = U/I;
				cout << "\nFor " << I << "A " << "and " << U << "V " << "R = " << R << "Om" << endl;
				return 0;
				
			case 101:
				cout << "Enter I and R: ";
				cin >> I >> R;
				U = I * R;
				cout << "\nFor " << I << "A " << "and " << R << "Om " << "U = " << U << "V" << endl;
				return 0;
				
			case 11:
				cout << "Enter U and R: ";
				cin >> U >> R;
				I = U/R;
				cout << "\nFor " << U << "V " << "and " << R << "Om " << "I = " << I << "A" << endl;
				return 0;
				
			default:
				cout << "\nNot full data. Try again." << endl;
				
		}
		
	}
	
	return 0;
}