#include<iostream>
using namespace std;

int deret(int n){
        if (n==1){
            return 0;
        }else{
        	return n + deret(n-1);
        }
    
}

int main(){
	int n;
	cin >> n;
	cout << "Hasil Penjumlahan: " << deret(n);
}

