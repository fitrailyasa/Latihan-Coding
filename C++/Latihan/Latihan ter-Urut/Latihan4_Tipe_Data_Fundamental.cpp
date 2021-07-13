#include <iostream>  
using namespace std;

int main(){
	
	//Tipe Data Fundamental
	
	// int = integer => Bilangan bulat
	int a = 1; // 32-bit atau sama dengan 4-byte 
	unsigned int aa = 11; //32-bit (tidak ada negatif dan dimulai dari 0)
	long b = 4;
	short c = 2;
		
	// float = Bilangan desimal/pecahan
	float d = 1.0;
	double e = 2.5;
	
	// char = Karakter dan string = Kumpulan dari Karakter (string disarankan pakai #include <string>)
	char f = 'a'; // Karakter 1-bit
	string g = "nde"; 
	
	// bool = Boolean => true atau false
	bool g = true; // 1
	
	cout << a << endl;
	cout << sizeof(a) << "byte" << endl;
	//	cout << numeric_limits<int>::max() << endl;
	//	cout << numeric_limits<int>::min() << endl;
	
	return 0;
}
