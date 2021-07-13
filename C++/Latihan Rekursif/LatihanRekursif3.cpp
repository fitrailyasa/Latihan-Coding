#include<iostream>
using namespace std;

int deret(int n){
        if (n==2){
            return 0;
        }else{
        	return 2*n + deret(n-1);
        }
    
}

int main(){
	int n;
	cin >> n;
	cout << "Hasil Penjumlahan: " << deret(n);
}

