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
