#include <iostream>
using namespace std;

int main(){
    int perkalian, n, batas;   // deklarasi variabel
    cout << "Perkalian : ";
    cin >> perkalian;           //input nilai
    cout << "Sampai Dengan: ";  //masukan batas
    cin >> batas;
    cout<<endl;               //memindahkan line satu baris kebawah
    for(n=1; n<=batas; n++)       //perulangan
    cout << perkalian << "x" << n << "=" << perkalian*n << endl;   // operasi perkalian dilakukan
	cout << endl;
	system("pause");
	return 0;
}
