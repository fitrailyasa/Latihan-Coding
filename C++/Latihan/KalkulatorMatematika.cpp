#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void hitung();
void konversi();
void garis ();
long total (int x, int y);

int ribuan = 0;
int limaratusan = 0;
int ratusan = 0;
int limapuluhan = 0;
int puluhan = 0;
int limaan = 0;
int satuan = 0;
int desimal;
char romawi[30];

int main(){
	const float phi = 3.14;
	float a,b,c,d,e,f,n,r,x;
	char m;
	do{
		cout << "|======================================|" << endl;
		cout << "|     PROGRAM FUNGSI MATEMATIKA        |" << endl;
		cout << "|======================================|" << endl;
		cout << "| Menu Pilihan                         |" << endl;
		cout << "|======================================|" << endl;
		cout << "| 1. Pembagian                         |" << endl;
		cout << "| 2. Luas Lingkaran                    |" << endl;
		cout << "| 3. Keliling Lingkaran                |" << endl;
		cout << "| 4. Luas Segitiga                     |" << endl;
		cout << "| 5. Keliling Segitiga                 |" << endl;
		cout << "| 6. Volume Bola                       |" << endl;
		cout << "| 7. Operasi Pangkat (x pangkat n)     |" << endl;
		cout << "| 8. Operasi Akar (akar dari x)        |" << endl;
		cout << "| 9. Persamaan Kuadrat a(x*x)+b(x)+c   |" << endl;
		cout << "| 10. PROGRAM KONVERSI KE BIL. ROMAWI  |" << endl;
		cout << "|======================================|" << endl;
		cout << endl;
		cout << "Masukkan Menu Pilihan : ";
		cin>>d;
		if(d==1){
			cout << "Masukan angka 1 : ";
			cin >> a;
			cout << "Masukan angka 2 : ";
			cin >> b;
			c = a/b;
			cout << a << " / " << b << " = " << c << endl;
			cout << endl;
		}
		else if(d==2){
			cout << "Masukan jari : ";
			cin >> a;
			c = phi*a*a;
			cout << "Luas Lingkaran = " << phi << " * " << a <<" * " << a << " = "<<c<<endl;
			cout << endl;
		}
		else if(d==3){
			cout << "Masukan jari-jari : ";
			cin >> a;
			c = 2*phi*a;
			cout << "Keliling Lingkaran = " << 2 << " * " << phi << " * " << a << " = " << c << endl;
			cout << endl;
		}
		else if(d==4){
			cout << "Masukan Alas : ";
			cin >> a;
			cout << "Masukan Tinggi : ";
			cin >> b;
			c = 0.5*a*b;
			cout << "Luas Segitiga = " << 0.5 << " * " << a << " * " << b << " = " << c << endl;
			cout << endl;
		}
		else if(d==5){
			cout << "Masukan Alas : ";
			cin >> a;
			cout << "Masukan Tinggi : ";
			cin >> b;
			c = a*b;
			cout << "Keliling Segitiga = " << a << " * " << b << " = " << c << endl;
			cout << endl;
		}
		else if(d==6){
			cout << "Masukan jari-jari : ";
			cin >> r;
			c = 1.33333*phi*r*r*r;
			cout << "Volume Bola = " << " 4/3? " << " * " << phi << " * " << r << " * " << r << " * " << r << " = " << c << endl;
			cout << endl;
		}
		else if(d==7){
			cout << "masukkan x : ";
			cin >> x;
			cout << "masukkan n : ";
			cin >> n;
			a = pow(x,n);
			cout << endl;
			cout << x << " pangkat " << n << " = " << a << endl;
		}
		else if(d==8){
			cout << "masukkan x : ";
			cin >> x;
			a = sqrt(x);
			cout << endl;
			cout << "akar dari " << x << " = " << a << endl;
		}
		else if(d==9){
			cout << "masukkan nilai a : ";
			cin >> a;
			cout << "masukkan nilai b : ";
			cin >> b;
			cout << "masukkan nilai c : ";
			cin >> c;
			d = sqrt(b*b-4*a*c);
			if(d >= 0){
				e = (-b-d)/(2*a);
				f = (-b+d)/(2*a);
				cout << "x1 : " << e << endl;
				cout << "x2 : " << f << endl << endl;
			}
			else
				cout << "akar imajiner"<<endl;
		}
		else if(d==10){
			char lagi;
			char kosong[30] = "";
				do{
					strcpy(romawi,kosong);
					hitung();
					konversi();
					
					cout << "Bilangan Romawinya adalah : " << romawi << endl;
					cout << "ulangi ? : ";
					cin >> lagi;
					lagi = toupper(lagi);
				}while((lagi=='Y')||(lagi=='y'));
		}
		else{
			cout << "\nkode salah..!!" << endl << endl;
		}
		cout << "\nIngin Masuk Menu Lagi(Y/T)?";
		cin >> m;
		cout << endl;
	}
	while ((m=='y')||(m=='Y'));
	cout << endl;
	system("pause");
	return 0;
}


void hitung(){
	ulang :
	cout << "masukan bilangan desimal (1..3999) : ";
	cin >> desimal;
	if (desimal>3999){
		cout << "diluar jangkauan" << endl;
		goto ulang;
	}
	else
	proses:
	if (desimal >= 1000){
		ribuan = desimal / 1000;
		desimal = desimal % 1000;
		goto proses;
	}
	else if (desimal >=500){
		limaratusan = desimal / 500;
		desimal = desimal % 500;
		goto proses;
	}
	else if (desimal >= 100){
		ratusan = desimal / 100;
		desimal = desimal % 100;
		goto proses;
	}
	else if (desimal >= 50){
		limapuluhan = desimal / 50;
		desimal = desimal % 50;
		goto proses;
	}
	else if (desimal >= 10){
		puluhan = desimal / 10;
		desimal = desimal % 10;
		goto proses;
	}
	else if (desimal >=5){
		limaan = desimal / 5;
		desimal = desimal % 5;
		goto proses;
	}
	else
	satuan = desimal;
}

void konversi(){
	for(int i=1; i<=ribuan;i++)
	strcat(romawi,"M");
	
	if((limaratusan==1)&&(ratusan !=4))
	strcat(romawi,"D");
	if((limaratusan==0)&&(ratusan==4))
	strcat(romawi,"CD");
	else
	if((limaratusan==1)&&(ratusan==4))
	strcat(romawi,"CM");
	else
	
	for(int i=1;i<=ratusan;i++)
	strcat(romawi,"C");
	if((limapuluhan==1)&&(puluhan!=4))
	strcat(romawi,"L");
	if((limapuluhan==0)&&(puluhan==4))
	strcat(romawi,"XL");
	else
	if((limapuluhan==1)&&(puluhan==4))
	strcat(romawi,"XC");
	else
	for(int i=1;i<=puluhan;i++)
	strcat(romawi,"X");
	if((limaan==1)&&(satuan!=4))
	strcat(romawi,"V");
	if((limaan==0)&&(satuan==4))
	strcat(romawi,"IV");
	else
	if((limaan==1)&&(satuan==4))
	strcat(romawi,"IX");
	else
	for(int i=1;i<=satuan;i++)
	strcat(romawi,"I");
}
