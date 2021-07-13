#include<iostream>
using namespace std;

int main(){
	float n,V,M,V_add;
	cout<<"Masukkan jumlah mol zat (n) = ";
	cin>>n;
	cout<<"Masukkan volume pelarut mula - mula (V) dalam
	liter = ";
	cin>>V;
	M=n/V;
	while(M>=0.5){
		cout<<"Tambahkan pelarut sebanyak (liter) = ";
		cin>>V_add;
		V=V+V_add;
		M=n/V;
	}
	cout<<"Konsentrasi akhir larutan (M) = "<<M<<endl;
	cout<<"Volume akhir larutan (liter) = "<<V;
}
