#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void commonChar(string a,string b){
	vector<char>list;
	for(int i=0;i<a.length();i++){
		if(!islower(a[i]))continue;
		for(int j=0;j<b.length();j++){
			if(a[i]==b[j]){
				list.push_back(b[j]);
				b[j]='*';
				break;
			}
		}
	}
	
	sort(list.begin(),list.end());
	
	for(int i=0;i<list.size();i++){
		cout<<list[i];
	}
	cout<<endl;
}

int main() {
	string a;
	string b;
	while(getline(cin,a)&&getline(cin,b)){
		commonChar(a,b);
	}
}

// 解二
#include <iostream>
using namespace std;

void result(string a,string b){
	int first[26]={0};
	int second[26]={0};
	
	for(int i=0;i<a.length();i++){
		int tmp=a[i]-'a';
		first[tmp]+=1;
	}
	
	for(int j=0;j<b.length();j++){
		int tmp=b[j]-'a';
		second[tmp]+=1;
	}
	
	for(int k=0;k<26;k++){
		int common=min(first[k],second[k]);
		for(int i=0;i<common;i++){
			cout<<(char)('a'+k);
		}
	}
	cout<<endl;
}

int main() {
	string line1="",line2="";
	while(getline(cin,line1)&&getline(cin,line2)){
		result(line1,line2);
	}
}
