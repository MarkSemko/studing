#include <iostream>

using namespace std;

void lesson1();
void lesson2();
void lesson3();
void lesson4();
void lesson5();
void lesson6();
void lesson7();
void lesson8();

int main () {
	
	int choise;
	
	while (true) {
		cout << "\n Select the lesson: \n"
				"1. Square of the rectangle \n"
				"2. Convertation from lb to kg \n"
				"3. Banking \n"
				"4. Square of the circle \n" 
				"5. Square of the ring \n" 
				"6. Volume and square of the cylinder \n" 
				"7. Magazine for office \n" 
				"8. Magazine for notebook and cover \n"
				"9. Exit \n \n"
				"Your choise: ";
		cin >> choise;
		
		if (choise > 9) {
			cout << "Select number of lesson from this list." << endl;
		}
		
		switch (choise) {
			case 1: 
					lesson1();
					break;
			case 2: 
					lesson2();
					break;
			case 3: 
					lesson3();
					break;
			case 4: 
					lesson4();
					break;
			case 5: 
					lesson5();
					break;
			case 6: 
					lesson6();
					break;
			case 7: 
					lesson7();
					break;
			case 8: 
					lesson8();
					break;
			case 9:
					return 0;
		}
	}
	
	return 0;
}

void lesson1() {
	
	float a, b, s;
	
	cout << "Enter size of sides a and b of rectangle: " << endl;
	cin >> a >> b;
	s = a * b;
	cout << "For rectangle with sides " << a << " and " << b << " square is: " << s << endl;
	
	return;
}

void lesson2() {
	
	float lb, kg;
	
	cout << "Enter mass by lb: ";
	cin >> lb;
	 kg = lb/2.20462;
	cout << "\n This is: " << kg << " kg." << endl;
	
	return;
}

void lesson3() {
	
	float sum, res, inc = 3;
	int month;
	
	cout << "Enter how many money you wanna banking: ";
	cin >> sum;
	res = sum;
	cout << "\n How much months do you want to wait?" << endl;
	cin >> month;
	
	for (int i = 0; i < month; i++) {
		res = res*(1 + inc/100);
	}
	cout << "For " << month << " month and with percentage is 3% your money increase to " << res << endl;
	
	return;
}

void lesson4() {
	
	float pi = 3.14, r, s;
	
	cout << "Enter the radius: ";
	cin >> r;
	s = pi * r * r;
	cout << "Square of the circle is: " << s << endl;
	
	return;
}

void lesson5() {
	
	float pi = 3.14, r1, r2, s;
	
	cout << "Enter radius of inner and outer circles: ";
	cin >> r1 >> r2;
	
	if (r1 > r2) {
		s = pi * (r1 * r1 - r2 * r2);
		cout << "Square of the ring is: " << s << endl;
	}
	else {
		s = pi * (r2 * r2 - r1 * r1);
		cout << "Square of the ring is: " << s << endl;
	}
	
	return;
}

void lesson6() {
	
	float pi = 3.14, r, h, s, v;
	
	cout << "Enter radius and height of the cylinder: ";
	cin >> r >> h;
	s = 2 * pi * r * h +  2 * pi * r * r;
	v = pi * r * r * h;
	cout << "\n The whole square is: " << s << "\n The volume is: " << v << endl;
	
	return;	
}

void lesson7() {
	
	int notebook, pencil, straightedge;
	float pn, pp, ps, sum;
	
	cout << "What a price of notebook, pencil and straightedge?" << endl;
	cin >> pn >> pp >> ps;
	cout << "How many notebooks, pencils and straightedges you want to take?" << endl;
	cin >> notebook >> pencil >> straightedge;
	
	sum = pn * notebook + pp * pencil + ps * straightedge;
	
	cout << "You need " << sum << " rub" << endl;
	
	return;
}

void lesson8() {
	
	int n;
	float pricen, pricec, sum;
	
	cout << "Enter the prices of notebooks and covers: ";
	cin >> pricen >> pricec;
	cout << "\n How much you want to take?" << endl;
	cin >> n;
	sum = n * (pricen + pricec);
	cout << "You need " << sum << " rub." << endl;
	
	return;
}