#include <iomanip>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double xp, xk, R, R2, y, dx, x;
	cout << "������ R  = "; cin >> R;
	cout << "������ R2 = "; cin >> R2;
	cout << "������ � ��������� (xp)  = "; cin >> xp;
	cout << "������ � ������ (xk) = "; cin >> xk;
	cout << "������ ���� (dx) = "; cin >> dx;

	cout << fixed;
	cout << "-----------------------" << endl;
	cout << "|" << setw(4) << "x" << setw(5) << "|"
		<< setw(7) << "y" << setw(5) << "|" << endl;
	cout << "-----------------------" << endl;

	x = xp;
	while (x <= xk)
	{

		if (x <= -6) // 1 �������
			y = R2 / 2.;
		else
			if (-6 < x && x <= -2 * R2) // 2 �������
				y = -(2 * R2 * R2 + R2 * x) / (-4 * R2 + 12);
			else
				if (-2 * R2 < x && x <= 0) // 3,4 �������
					y = sqrt(R2 * R2 - pow((x + R2), 2));
				else
					if (0 < x && x <= R) // 5,6 �������
						y = -sqrt(R * R - (x - R) * (x - R));
					else
						y = (R * R - R * x) / 2.; // 7 ������� 
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
		
	}
	cin.get();
	return 0;
}