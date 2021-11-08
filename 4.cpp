#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Выберите месяц\n";
	cout << "январь\n";
	cout << "февраль\n";
	cout << "март\n";
	cout << "апрель\n";
	cout << "май\n";
	cout << "июнь\n";
	cout << "июль\n";
	cout << "август\n";
	cout << "сентябрь\n";
	cout << "октябрь\n";
	cout << "ноябрь\n";
	cout << "декабрь\n";
	
	int monts;
	cin >> monts;

	switch(monts) {
	case 1:
		cout << "[1] Балван сейчас октябрь \n";
		break;

	case 2:
		cout << "[2] Балван сейчас октябрь \n";
		break;
	case 3:
		cout << "[3] Балван сейчас октябрь \n";
		break;
	case 4:
		cout << "[4] Балван сейчас октябрь \n";
		break;
	case 5:
		cout << "[5] Балван сейчас октябрь \n";
		break;
	case 6:
		cout << "[6] Балван сейчас октябрь \n";
		break;
	case 7:
		cout << "[7] Балван сейчас октябрь \n";
		break;
	case 8:
		cout << "[8] Балван сейчас октябрь \n";
		break;
	case 9:
		cout << "[9] Балван сейчас октябрь \n";
		break;
	case 10:
		cout << "[10] Молодец сейчас октябрь \n";
		break;
	case 11:
		cout << "[11] Балван сейчас октябрь \n";
		break;
	case 12:
		cout << "[12] Балван сейчас октябрь \n";
		break;
	}
	return 0;
}