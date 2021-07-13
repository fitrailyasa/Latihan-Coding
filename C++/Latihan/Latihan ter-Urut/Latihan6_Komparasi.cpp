#include <iostream>  
using namespace std;

int main(){

	//Komparasi / Realtion expression / Perbandingan
	int a = 3;
	int b = 3;
	
	bool hasil1, hasil2; 
	
	//Sebanding ==
	hasil1 = (a == b);
	//Tidak sebanding !=
	hasil2 = (a != b);

	cout <<  hasil1 << endl;
	cout <<  hasil2 << endl;
	
	//Kurang dari <
	hasil1 = (a < b);
	//Lebih dari >
	hasil2 = (a > b);	
		
	cout <<  hasil1 << endl;
	cout <<  hasil2 << endl;
	
	//Kurang dari sama dengan <=
	hasil1 = (a < b);
	//Lebih dari sama dengan >=
	hasil2 = (a > b);
	
	cout <<  hasil1 << endl;
	cout <<  hasil2 << endl;
	
	return 0;
}
