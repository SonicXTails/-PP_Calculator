#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float num1, num2, ans;
	string oper, type_of_oper;

	oper = "Введите тип операции (+, -, *, /, ^, sqrt, 1%, !, exit): ";

	cout << oper;
	cin >> type_of_oper;

	while (true)
	{
		if (type_of_oper == "+")
		{
			cout << "Введите первое число: ";
			cin >> num1;

			cout << "Введеите второе число: ";
			cin >> num2;

			float ans = num1 + num2;
			cout << "Сумма чисел равна: " << ans << "\n" << endl;
		}

		if (type_of_oper == "-")
		{
			cout << "Введите первое число: ";
			cin >> num1;

			cout << "Введеите второе число: ";
			cin >> num2;

			float ans = num1 - num2;
			cout << "Разность чисел равна: " << ans << "\n" << endl;
		}

		if (type_of_oper == "/")
		{
			cout << "Введите первое число: ";
			cin >> num1;

			cout << "Введеите второе число: ";
			cin >> num2;

			float ans = num1 / num2;
			cout << "Частное чисел равно: " << ans << "\n" << endl;
		}

		if (type_of_oper == "*")
		{
			cout << "Введите первое число: ";
			cin >> num1;

			cout << "Введеите второе число: ";
			cin >> num2;

			float ans = num1 * num2;
			cout << "Произведение данных чисел равно: " << ans << "\n" << endl;
		}

		if (type_of_oper == "^")
		{
			cout << "Введите число возводимое в степень: ";
			cin >> num1;

			cout << "Введите степень: ";
			cin >> num2;

			float ans = num1;

			for (int i = 1; i < num2; i++)
			{
				ans = ans * num1;
			}

			cout << num1 << " в степени " << num2 << " равно: " << ans << "\n" << endl;

			return 0;
		}

		if (type_of_oper == "!")
		{
			int i;
			int ans = 1;

			cout << "Введите первое число: ";
			cin >> num1;

			for (i = 1; i <= num1; i++)
			{
				ans = ans * i;
			}
			cout << "Факториал числа " << num1 << " равен: " << ans << "\n" << endl;
			return 0;
		}

		if (type_of_oper == "sqrt")
		{
			cout << "Введите число из которого извлекается корень: ";
			cin >> num1;

			cout << "Корень из числа " << num1 << " равен: " << sqrt(num1) << "\n" << endl;
			return 0;
		}

		if (type_of_oper == "1%")
		{
			cout << "Введите число от которого вы хотите найти процент от числа: ";
			cin >> num1;

			cout << "1% от числа " << num1 << " равен: " << num1 * 0.01 << "\n" << endl;
			return 0;
		}

		if (type_of_oper == "exit")
		{
			exit;
		}
	}
	return 0;
}