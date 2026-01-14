#include <iostream>
using namespace std;

int result;

void degreeFun(string s){
	int tmp1,sum=0;
	for(int i=0;i<s.length();i++){
		tmp1=s[i]-'0';
		sum+=tmp1;
	}
	//cout<<"sum:"<<sum<<endl;
	if(sum%9==0){
		if(sum>9){
			result++;
			s=to_string(sum);
			degreeFun(s);
		}
	}else{
		result=0;
	}
}

int main() {
	string s;
	while(cin>>s){
		result=1;
		if(s=="0") break;
		degreeFun(s);
		if(result!=0){
			cout<<s<<" is a multiple of 9 and has 9-degree "<<result
<<"."<<endl;
		}else{
			cout<<s<<" is not a multiple of 9."<<endl;
		}		
	}
}
