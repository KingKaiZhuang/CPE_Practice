#include <iostream>

using namespace std;

int main(){
	int t;
	string date_list[]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
	int date_num[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(cin>>t){
		int n,m;
		int index=0;
		while(t--){
			cin>>n>>m;
			int d=0;
			for(int i=1;i<n;i++){
				d+=date_num[i];
			}
			d+=m;
			index=d%7;
			cout<<date_list[index]<<endl;
		}
	}
}
