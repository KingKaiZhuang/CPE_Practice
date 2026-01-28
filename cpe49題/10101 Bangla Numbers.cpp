#include <bits/stdc++.h>

using namespace std;

void bangla(long long n){
	int kuti,lakh,hajar,shata;
	if(n>=10000000){
		kuti=n/10000000;		
		bangla(kuti);
		n%=10000000;
		cout<<" kuti";
	}
	if(n>=100000){
		lakh=n/100000;
		n%=100000;
		cout<<" "<<lakh<<" lakh";
	}
	if(n>=1000){
		hajar=n/1000;
		n%=1000;
		cout<<" "<<hajar<<" hajar";
	}
	if(n>=100){
		shata=n/100;
		n%=100;
		cout<<" "<<shata<<" shata";	
	}
	if(n){
		cout<<" "<<n;
	}
}

int main(){
	long long n;
	int caseNum=0;
	while(cin>>n){
		cout<<setw(4)<<right<<++caseNum<<".";
		if(n){
			bangla(n);
		}else{
			cout<<" 0";
		}
		
		cout<<endl;
	}
}
