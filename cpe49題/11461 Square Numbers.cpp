#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a == 0 && b == 0){
			break;
		}
		
		int tmp = 1;
		int result = 1;
		int time = 0;
		
		while(result <= b) {
			if(result >= a && result <= b){
				time++;				
			}
			tmp++;
			result = tmp * tmp;
		}


		cout << time << endl;
	}
}
