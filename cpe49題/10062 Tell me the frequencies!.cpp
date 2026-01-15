#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	bool flag=false;
	
	while(getline(cin,s)){
		int record[128]={0};
		for(int i=0;i<s.length();i++){
			record[(int)s[i]]++;
		}
		
		if(flag)cout<<endl;
		
		for(int i=1;i<s.length();i++){
			for(int j=127;j>=0;j--){
				if(record[j]==i){
					cout<<j<<" "<<record[j]<<endl;
				}
			}
		}
		flag=true;
	}
}
