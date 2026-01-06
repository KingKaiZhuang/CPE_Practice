/*法一*/
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

/*法二*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n == 0 && m == 0){
			break;
		}
		int result = floor(sqrt(m)) - floor(sqrt(n-1));
		cout << result << endl;
	}
}
