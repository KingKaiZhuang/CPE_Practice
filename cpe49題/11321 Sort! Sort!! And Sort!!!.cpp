#include <iostream>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m) {
		cout << n << " " << m << endl;
		
		if(n == 0 && m == 0) break;
		
		int numList[n];
		
		for(int i=0;i<n;i++){
			cin >> numList[i];
		}
		
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				int val_1 = numList[j];
				int val_2 = numList[j+1];
				int mod_1 = val_1 % m;
				int mod_2 = val_2 % m;
				bool isOdd1 = (val_1 % 2) != 0;
				bool isOdd2 = (val_2 % 2) != 0;
				bool isTurn = false;
				
				if(mod_1 > mod_2){
					isTurn = true;
				} else if(mod_1 == mod_2) {
					if(!isOdd1 && isOdd2){
						isTurn = true;
					} else if(isOdd1 && isOdd2){
						if(val_1 < val_2) {
							isTurn = true;
						}
					} else if(!isOdd1 && !isOdd2){
						if(val_1 > val_2) {
							isTurn = true;
						}					
					}
				}
				
				if(isTurn) {
					int temp = numList[j];
					numList[j] = numList[j+1];
					numList[j+1] = temp;				
				}

			}
		}
		
		for(int i=0;i<n;i++){
			cout << numList[i] << endl;
		}
	}
}