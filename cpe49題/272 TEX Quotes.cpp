#include <iostream>
using namespace std;

string quoteChange(string s,bool &isChange){
	for(int i=0;i<s.length();i++){
		if(s[i]=='"'&&isChange){
			cout<<"``";
			isChange=false;
		}else if(s[i]=='"'&&!isChange){
			cout<<"''";
			isChange=true;
		}else{
			cout<<s[i];			
		}
	}
	cout<<endl;
}

int main() {
	string s;
	bool isChange=true;
	while(getline(cin,s)){
    	quoteChange(s,isChange);
    }
}
