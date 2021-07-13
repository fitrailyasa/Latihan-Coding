#include <iostream>  
using namespace std;
	
int main(){
	
	//Operator Logika : or, and, xor dan not
	int a = 3;
	int b = 2;
		
	bool hasil; //true = 1 dan false = 0
		
	//or : Salah satu atau keduanya nilai benar untuk menghasilkan true
	cout <<  "untuk or \n";
	hasil = (a == 3) or (b == 2); //true and true => true
	cout <<  hasil << endl;
	hasil = (a == 4) or (b == 2); //false and true => true
	cout <<  hasil << endl;
	hasil = (a == 3) || (b == 3); //true and false => true
	cout <<  hasil << endl;
	hasil = (a == 4) || (b == 3); //false and false => false
	cout <<  hasil << endl;
		
	//and : Kedua nilai benar untuk menghasilkan true
	cout <<  "untuk and \n";
	hasil = (a == 3) and (b == 2); //true and true => true
	cout <<  hasil << endl;
	hasil = (a == 4) and (b == 2); //false and true => false
	cout <<  hasil << endl;
	hasil = (a == 3) && (b == 3); //true and false => false
	cout <<  hasil << endl;
	hasil = (a == 4) && (b == 3); //false and false => false
	cout <<  hasil << endl;
		
	//xor : Salah satu nilai benar untuk menghasilkan true
	cout <<  "untuk xor \n";
	hasil = (a == 3) xor (b == 2); //true and true => false
	cout <<  hasil << endl;
	hasil = (a == 4) xor (b == 2); //false and true => true
	cout <<  hasil << endl;
		
	//not = nilai salah untuk menghasilkan true
	cout <<  "untuk not \n";
	hasil = !(a == b); // true
	cout <<  hasil << endl;
	
	return 0;
}
