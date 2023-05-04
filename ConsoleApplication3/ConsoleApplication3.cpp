#include <iostream>
#include <string>
using namespace std;

int main(){
	int cislo;
	cin >> cislo;
	string a = to_string(cislo);
		int x = a.size();
		int y = a[x-1] - 48;
		
		if (y == 2 || y == 4 || y == 6 || y == 8) {
			cout << "parne";
		}
		else {
			cout << "neparne";
		}
}