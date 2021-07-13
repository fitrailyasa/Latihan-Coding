#include <iostream>
using namespace std;

int main(){
	cout << "Masukkan tinggi kotak : ";
	int n;
	cin >> n;

	if (n > 0){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
	    		if ((i == 0) || (i == n-1) || (j == 0) || (j == n-1)){
	        		cout << "#";
		    	}
				else if ((i == 0) || (i == n-1) || (j == 0) || (j == n-1)){
	        		cout << "o";
		    	}
				else{
			         if (n % 2 == 1){
			        	cout << " ";
			         }
					 else {
			        	cout << " ";
			         }
		    	}
	    	}
	     cout << endl;
	    }
	}
	return 0;
}
