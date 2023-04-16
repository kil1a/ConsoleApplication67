#include <iostream>
using namespace std;
class fraction {
	int numerator{};
	unsigned int denominator{};//знаменатель
public:
	fraction() {
		cout << "Здравствуй пользователь, работаем с дробью" << endl;
	}
	void data_entry(int a, int b) {
		cout << "Введите числитель: " << endl;
		cin >> numerator;
		a = numerator;
		cout << "Введите знаменатель: " << endl;
		cin >> denominator;
		b = denominator;
		cout << "Ваша дробь получилась такой: " << a << "/" << b << endl;
	}
	void plus(int a, unsigned int b) {
		a = numerator;
		b = denominator;
		cout << "При сложении числителя и знаменателя, получилось такое число: " << a + b << endl;
	}
	void minus(int a, unsigned int b) {
		a = numerator;
		b = denominator;
		int f{}, g{};
		cout << "1.Вычесть числитель из знаменателя\n2.Вычесть знаменатель из числителя" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				if (b < a) {
					cout << "Такое число получилось при вычитании числителя из знаменателя: -" << (int)a - b << endl;
				}
				else
					cout << "Такое число получилось при вычитании числителя из знаменателя: " << (int)b - a << endl;
			}
			if (g == 2) {
				if (b > a) {
					cout << "Такое число получилось при вычитании знаменателя из числителя: -" << (int)b - a << endl;
				}
				else
					cout << "Такое число получилось при вычитании знаменателя из числителя: " << (int)a - b << endl;
			}
		}
		else cout << "Вы ввели число не подходящее пот требование";
	}
	void multiply(int a, unsigned int b) {
		a = numerator;
		b = denominator;
		cout << "При умножении числителя и знаменателя, получилось такое число: " << a * b << endl;
	}

	void division(int a, unsigned int b) {
		a = numerator;
		b = denominator;
		int f{}, g{};
		cout << "1.Делить числитель на знаменатель\n2.Делить знаменатель на числитель" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				cout << "Такое число получилось при делении числителя на знаменатель: " << (double)a / b << endl;
			}
			if (g == 2) {
				cout << "Такое число получилось при делении знаменателя на числитель: " << (double)b / a << endl;
			}
		}
		else cout << "Вы ввели число не подходящее пот требование";
	}
};
int main()
{
	setlocale(LC_ALL, "RUS");
	
	fraction a;
	int c{}, b{};
	a.data_entry(c, b);
	a.plus(c, b);
	a.minus(c, b);
	a.multiply(c, b);
	a.division(c, b);











	return 0;
}
