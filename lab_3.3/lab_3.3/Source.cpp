// lab_3.3.cpp
// < Процюк Ярослав >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 21
 #include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі

	if (x <= -6 - R)
		y = 0;
	else
		if (-6 - R < x && x <= -6)
			y = - sqrt(pow(R , 2) - pow(x + 6 , 2));
		else
			if (-6 < x && x <= -R)
				y = pow(R , 2) - R * x / -R + 6;
			else
				if (-R < x && x <= 0)
					y = pow(R , 2) - pow(x , 2);
				else
					if (0 < x && x <= 3)
					y = 3 * R - R * x / 6;
					else
						y = R * x  - 3 * R / 6;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}