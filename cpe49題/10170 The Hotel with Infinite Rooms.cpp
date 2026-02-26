#include <bits/stdc++.h>

using namespace std;

int main(){
	long long s,d;
	while(cin>>s>>d){				
		long long curPeople=s;
		long long date=s;
		
		while(date<d){
			curPeople+=1;
			date+=curPeople;
		}
		
		cout<<curPeople<<endl;
	}
}
