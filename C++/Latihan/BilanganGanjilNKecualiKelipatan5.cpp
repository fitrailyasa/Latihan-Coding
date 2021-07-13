#include<iostream>
using namespace std;

int main(){
     int n;
     cout << "masukkan n : ";
	 cin >> n;
	 cout << endl;
     for(int i = 1; i <= n; i++){
          if( i % 2 != 0 and i % 5 != 0){
           cout << i << " ";
		  } 
     }
    cout << endl << endl;
    system("pause");
    return 0;
}
