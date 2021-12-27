#include "cstdlib" //для rand()
#include <iostream>
#include <ctime> //для time
#include <Windows.h> //для SetConsoleCP
#include <stdlib.h> //для system("cls")
#define exiting char choice; do { cout << "Завершить работу?\nY - Да\nN - Нет\n\n"; choice = _getwch(); if (choice != 'y' && choice != 1085 && choice != 'n' && choice != 1090) cout << "Ошибка ввода! Попробуйте ещё раз!\n"; } while (choice != 'y' && choice != 1085 && choice != 'n' && choice != 1090); switch (choice) { case 'y': case 1085: ext = 1; break; case 'n': case 1090: break; }
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	//SetConsoleCP(1251); // для обработки
	srand(time(0));
	int n;
	cout << "Количество чисел = ";
	cin >> n;
	int a, b;
	cout << "Диапазон\nот ";
	cin >> a;
	cout << "до ";
	cin >> b;
	int floaties;
	cout << "Целых? (1 - да, 0 - нет)";
	/*cin.ignore(cin.rdbuf()->in_avail());*/
	floaties = _getwch() - '0';
	bool ext = false;
	while (!ext)
	{
		system("cls"); //clear screen
		if (!floaties)
			for (int i = 0; i < n; i++)
				cout << a + rand() % (b + 1 - a) + (double)rand() / RAND_MAX << " ";
		else
			for (int i = 0; i < n; i++)
				cout << a + rand() % (b + 1 - a) << " ";
		cout << "\n\n";
		exiting
	}
	return 0;
}