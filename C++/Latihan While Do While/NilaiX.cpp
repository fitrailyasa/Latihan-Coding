#include <iostream>
using namespace std;
 
int main(){
	int n;
	cout << "Masukkan sebuah bilangan bulat: ";
	cin >> n;
	
	for(int i = n; i > 0; i--){
		for(int j = i; j > 0; j--){
			cout << "X";
		}
		cout << endl;
	}
	
	return 0;
}
