#include <iostream>
#include<cmath>
using namespace std;
 
int main(){
    float alas, tegak, miring;
    cout << "Masukkan panjang sisi alas (m)   : ";
    cin >> alas;
    cout << "Masukkan panjang sisi tegak (m)  : ";
    cin >> tegak;
    miring = sqrt((alas*alas) + (pow(tegak, 2)));
    cout << "sisi miring (m)                  : " << miring << endl;
    cout << "luas (m2)                        : " << 0.5*alas*tegak << endl;
    cout << "keliling (m)                     : " << alas+tegak+miring << endl;
    cout << endl;
	system("pause");
	return 0;
}
