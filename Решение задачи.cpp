#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(void){

	const double t = 2.54;
	int err, n, d;
	double f, i;

	setlocale(LC_ALL, "Russian");

	cout << left;
	cout << setprecision(2);
	cout << fixed;

	cout << "Введите целое число - расстояние в см. " << endl;
	err = scanf_s("%d", &n);
	if (err != 1) {                                   
		cout << "Введенные данные неверны." << endl;
		return 1;
	}
	double n2 = n;

	if (n < 0) {
		d = n / t;
		i = n2;
		n2 = -1.0;
	}
	else {
		d = 1;
		i = 1.0;
	}
	double d2 = d;

	cout << endl;
	cout << "Дюймы  " << " См" << endl;
	cout << endl;

	for ( i; i < n2 + 1; ++i) {
		f = i / t;
		cout << setw(8) << f << i << endl;
		if (d2 < (i + 1) / t) {
			cout << setw(8) << d2 << d2 * t << endl;
			d2++;
		}
	}
	return 0;
}
