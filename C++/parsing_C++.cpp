#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kata;
	string simpan[100];
	int j = 0;
	cin >> kata;
	
	char pemisah = ',';
	for(int i = 0; i < kata.length(); i++){
		
		if(kata[i] == pemisah){
			j++;
		} else {
			simpan[j] += kata[i];
		}
	}
	
	for(int i = 0; i <= j; i++){
		cout << simpan[i] << endl;
	}
}
