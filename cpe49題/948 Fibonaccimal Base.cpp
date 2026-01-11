#include <iostream>
using namespace std;

int fibArray[40];

void fibFun(){
	fibArray[0]=0;
	fibArray[1]=1;
	for(int i=2;i<40;i++){
		fibArray[i]=fibArray[i-1]+fibArray[i-2];		
	}
}

string calculate(int num){
	cout<<num<<" = ";
	string result="";
	bool start=false;
	for(int i=39;i>1;i--){
		if(num>=fibArray[i]){
			result+="1";
			num-=fibArray[i];
			start=true;
		}else if(start){
			result+="0";
		}
	}
	return result;
}

int main() {
	fibFun();
	int time,n;
	cin>>time;
	
	while(time--){
		cin>>n;
		cout<<calculate(n)<<" (fib)"<<endl;
	}
}
