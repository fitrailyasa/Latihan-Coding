#include <iostream>
using namespace std;

int max(int a, int b){
  return (a > b) ? a : b;
}

int min(int a, int b){
  return (a < b) ? a : b;
}

void hitung(){
  int a, b, c, maksimum, minimum;
  char cek;

  cout << "Masukkan angka pertama : ";
  cin >> a;

  cout << "Masukkan angka kedua : ";
  cin >> b;

  cout << "Masukkan angka ketiga : ";
  cin >> c;
  
  maksimum = max(a, max(b, c));
  minimum = min(a, min(b, c));

  cout << "\nNilai maximum = " << maksimum << endl;
  cout << "Nilai minimum = " << minimum << endl;
  cout << "\nLakukan perbandingan lagi (y/n) ? ";
  cin >> cek;

  cout << endl;
  if(cek == 'y'){
    hitung();
  } else {
    cout << "Program selesai!" << endl;
  }
}

int main(){
  hitung();
  return 0;
}
