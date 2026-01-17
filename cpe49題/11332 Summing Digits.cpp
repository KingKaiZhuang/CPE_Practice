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
// 版本二 遞迴呼叫
#include <bits/stdc++.h>

using namespace std;

void f(string s){
		
	if(s.length()!=1){
		int r=0;
		for(int i=0;i<s.length();i++){
			r+=s[i]-'0';
		}
		f(to_string(r));
	}else{
		cout<<s<<endl;
	}
}

int main(){
	string s;
	while(cin>>s){
		if(s=="0")break;
		f(s);		
	}
}
