#include <iostream>
using namespace std;

int main() {
    int n,m;
    while(cin>>n>>m){
    	if(n==0 && m==0)break;
    	int result=0;
    	int add=0;
    	int tmp=0;
    	int sum=0;
    	while(n>0||m>0){
    		tmp=n%10+m%10;
    		sum=tmp+add;
	    	if(sum>=10){
	    		result+=1;
	    		add=sum/10;
	    	}else{
	    		add=0;
	    	}
	    	n/=10;
			m/=10;
    	}
		if(result==0){
			cout<<"No carry operation.";
		}else if(result==1){
			cout<<result<<" carry operation.";
		}else{
			cout<<result<<" carry operations.";
		}
		cout<<endl;
    }
}
