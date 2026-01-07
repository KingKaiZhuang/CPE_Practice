#include <iostream>

using namespace std;

int main(){
	int t;
	int m,d;
	string day_list[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	int date[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int day_result=0;
	
	while(cin>>t){
		while(t--){
			int total=0;
			cin>>m>>d;
			for(int i=1;i<m;i++){
				total+=date[i];
			}
			
			total+=d;
			int index=(total-1)%7;
			cout<<day_list[index]<<endl;	
		}
	}
}
