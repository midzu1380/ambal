#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[+] Плюсик" << endl;
	cout << "[+] Размер" << endl;
	int size;
	cin >> size;
	cout << "[+] Текстура" << endl;
	char texture;
	cin >> texture;
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			if (x == (size / 2) || y == size / 2) {
				cout << texture ;
			}
			else {
				cout << ".";
			}

		}
		cout << endl;


	}

		int _; cin >> _;
		return 0;
	}
