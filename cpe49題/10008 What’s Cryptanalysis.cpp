#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[26]={0};
	cin>>n;
	string temp;
	getline(cin, temp);
	
	while(n--){
		string s="";
		getline(cin,s);
		
		for(int i=0;i<s.length();i++){
			if(isalpha(s[i])){
				char c=toupper(s[i]);
				a[c-'A']++;
			}
		}
	}
	
	for(int i=0;i<26;i++){
		int max=0;
		int pos=-1;
		
		for(int j=0;j<26;j++){
			if(a[j]>max){
				max=a[j];
				pos=j;
			}			
		}
		
		if(max==0)break;
		
		
		cout<< char('A'+pos)<<" "<<max<<endl;
		a[pos]=0;
		
	}
}
