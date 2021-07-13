#include <iostream> // library / perpustakaan
using namespace std; // std standard penulisan

int main(){ // program utama
	double n, x;
	
	cout << "Masukkan bilangan faktorial: ";
	cin >> n; // 10
	x = n;
	cout << n << "! = ";
	for(int i = 1; i <= n; i++){ // i + 1
		cout << i;
		if(i==n){
			cout << " = ";
		} else {
			cout << " x ";
		}
	}
	for(int i = 1; n > i;){
	       n = n-1;
	       x = n*x;
	}
	cout << x;
	cout << endl;
	system("pause");
	return 0;
}
