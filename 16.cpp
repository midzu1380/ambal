#include <iostream>
#include <windows.h>
#define color system("color 61")
#define text system("color 0c");
using namespace std;


int main() {
	setlocale(0, "");
	cout << "[+] Программа - Функции \n";
	cout << "[1] очищение консоли \n";
	cout << "[2] изменить цвет фона \n";
	cout << "[3] изменить цвет текста \n";
	cout << "[4] вывод размера типа данных int \n";
	cout << "[5] вывод размера типа данных char \n";
	cout << "[6] вывод размера типа данных double \n";
	cout << "[7] вывод размера типа данных float \n";
	cout << "[8] вывод размера типа данных bool \n";
	cout << "[9] вывод сообщения привет я функция \n";
	cout << "[+] Введите цифру \n";



	int menu;
	cin >> menu;

	if (menu == 1) {
		cout << " Очищение консоли \n";
		Sleep(1500);
		system("cls");
	}

	if (menu == 2) {
		system("cls");
		cout << " изменение цвета фона \n";
		color;
	}
	if (menu == 3) {
		system("cls");
		cout << " изменение цвета текста \n";
		text;
	}
	if (menu == 4) {
		system("cls");
		cout << " вывод размера типа данных int \n";
		int var = 1;
		cout << "int | var = " << sizeof(var) << endl;
	}

	if (menu == 5) {
		system("cls");
		cout << " вывод размера типа данных char \n";
		char var1 = '#';
		cout << "char | var1 = " << sizeof(var1) << endl;
	}

	if (menu == 6) {
		system("cls");
		cout << " вывод размера типа данных double \n";
		double var2 = 2.2;
		cout << "double | var2 = " << sizeof(var2) << endl;
	}

	if (menu == 7) {
		system("cls");
		cout << " вывод размера типа данных float \n";
		float var3 = 12.2;
		cout << "float | var3 = " << sizeof(var3) << endl;
	}

	if (menu == 8) {
		system("cls");
		cout << " вывод размера типа данных bool \n";
		bool var4 = true;
		cout << "bool | var4 = " << sizeof(var4) << endl;
	}
	if (menu == 9) {
		system("cls");
		cout << "Привет я функция!" << endl;
	}


		int _; cin >> _;
		return 0;
	}

