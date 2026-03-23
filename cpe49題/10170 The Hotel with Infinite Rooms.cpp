#include <iostream>

using namespace std;

int main(){
	long long p,d;
	while(cin>>p>>d){
		while(1){
			if(p>=d){
				cout<<p<<endl;
				break;
			}
			d-=p;
			p+=1;		
		}
	}
}
