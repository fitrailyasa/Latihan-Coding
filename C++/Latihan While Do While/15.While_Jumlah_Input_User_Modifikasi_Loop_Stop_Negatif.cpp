#include<iostream>
using namespace std;

int main(){
	int i=1;
	int x,sum=0;
	while(x>=0){
		cout<<"Data ke "<<i<<" = ";
		cin>>x;
		sum = sum + x;
		i++;
	};
	cout<<endl;
	cout<<"Hasil jumlah data = "<<sum-x;
}
