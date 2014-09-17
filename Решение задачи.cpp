#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(void){

	const double t = 2.54;
	int err;
	double f, d, n;

	setlocale(LC_ALL, "Russian");

	cout << left;
	cout << setprecision(2);
	cout << fixed;

	cout << "Введите целое число - расстояние в см. " << endl;
	err = scanf_s("%lf", &n);
	if (err != 1) {                                   
		cout << "Введенные данные неверны." << endl;
		return 1;
	}

	cout << endl;
	d = 1.0;
	cout << "Дюймы  " << " См" << endl;
	cout << endl;
	for (double i = 1.0; i < n + 1; i++) {
		f = i / t;
		cout << setw(8) << f << i << endl;
		if (d < (i + 1) / t) {
			cout << setw(8) << d << d * t << endl;
			d++;
		}
	}
	return 0;
}
