// друге завдання
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер планети: ";
	cin >> x;
	
	switch (x)
	{
	case 1: cout << "Меркурій"; break;
	case 2: cout << "Венера"; break;
	case 3: cout << "Земля"; break;
	case 4: cout << "Марс"; break;
	case 5: cout << "Юпітер"; break;
	case 6: cout << "Сатурн"; break;
	case 7: cout << "Уран"; break;
	case 8: cout << "Нептун"; break;
	default: cout << "Не існує"; break;
	}
}
/*
int main()
{
	float F;
	int a, b, c, x;
	cout << "Input a, b, c, x: " << endl;
	cin >> a >> b >> c >> x;
	if (x = 0 || b!=0) {
		F = a * pow((x + c), 2) - b;
		cout << "F = " << F << endl;
	}
	else {
		if (x == 0 && b == 0) {
			F = (x - a) / (-c);
			cout << "F = " << F << endl;
		}
		else {
			F = a + (x / c);
			cout << "F = " << F << endl;
		}
	}
}
*/
