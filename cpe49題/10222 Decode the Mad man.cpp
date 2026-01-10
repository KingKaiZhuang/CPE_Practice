// 複雜練習版
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kb="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

vector<char> revealFun(string s){
	//cout<<s<<endl;
	vector<char>list;
	for(int i=0;i<s.length();i++){
		char target=tolower(s[i]);
		size_t index=kb.find(target);
		if(index!=string::npos){
			list.push_back(kb[index-2]);
		}else{
			list.push_back(s[i]);
		}		
	}
	return list;
}

int main() {
	string s;
    while(getline(cin,s)){
    	vector<char> mylist=revealFun(s);
	    for(int i=0;i<mylist.size();i++){
	    	cout<<mylist[i];
	    }
	    cout<<endl;    
    }
}
// 簡化版本
