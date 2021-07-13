#include <iostream>
using namespace std;

int main(){
    long desimal, pembagi=1073741824, bit;
    cout<<"Nilai Desimal : ";
    cin>>desimal;
    cout<<"Hexadesimal = "<<hex<<desimal<<endl;
    cout<<"Oktal       = "<<oct<<desimal<<endl;
    cout<<"Biner       = ";
    
	while(pembagi>desimal) pembagi/=2;
    do{
        bit=desimal/pembagi;
        cout<<bit;
        desimal=desimal%pembagi;
        pembagi/=2;
    } while(pembagi>=1);
    cout << endl << endl;
    system("pause");
    return 0;    
}
