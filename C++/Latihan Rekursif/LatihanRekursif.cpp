#include <iostream>
using namespace std;

int Faktorial(int n){
	if (n < 0){
		return -1;
	} else if (n > 1){
		return (n * Faktorial(n-1));
	} else{
		return 1;
	}
	
}

int main(){
	int n;
	cin >> n;
	cout << Faktorial(n);
	return 0;
}
