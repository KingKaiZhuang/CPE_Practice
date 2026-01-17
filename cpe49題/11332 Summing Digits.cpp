#include <bits/stdc++.h>

using namespace std;

void f(int n){
	string s;
	s=to_string(n);
	
	while(s.length()!=1){
		long long sum=0;
		for(int i=0;i<s.length();i++){
			sum+=s[i]-'0';
		}
		s=to_string(sum);
	}
	cout<<s<<endl;
}

int main(){
	int n=0;
	while(cin>>n){
		if(n==0)break;
		f(n);
	}
}
