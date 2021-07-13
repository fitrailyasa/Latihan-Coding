#include <iostream>
using namespace std;
 
int main(){
	int n, i;
	bool angka_prima = true;
	cout << "Masukkan Bilangan Bulat: ";
	cin >> n;
 
	// 0 dan 1 bukan angka prima
	if (n == 0 || n == 1) {
	  angka_prima = false;
	}
	else {
	  for (i = 2; i <= n / 2; i++) {
	    if (n % i == 0) {
	      angka_prima = false;
	      break;
	    }
	  }
	}
	 
	cout << endl;
	if (angka_prima)
	  cout << n << " Bilangan prima";
	else
	  cout << n << " Bukan bilangan prima";
	 
	cout << endl;
	return 0;
}
