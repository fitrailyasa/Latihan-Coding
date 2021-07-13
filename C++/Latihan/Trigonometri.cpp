#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	const double PI = 3.141592653589793238463;
    float nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    cout << "sin(" << nilai << ") = " << sin(nilai*(PI / 180.0)) << endl;
    cout << "cos(" << nilai << ") = " << cos(nilai*(PI / 180.0)) << endl;
    cout << "tan(" << nilai << ") = " << tan(nilai*(PI / 180.0)) << endl;
    cout << endl;
	system("pause");
    return 0;
}
