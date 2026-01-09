#include <iostream>
using namespace std;

int main() {
    long long s,d;

    while(cin>>s>>d){
	    long long people=0;
    	long long day=0;
    	long long sum=0;
    	
    	if(s>=d){
    		cout<<s<<endl;
    		continue;
    	}
    	
    	for(long long i=s;i<=d;i++){
    		sum+=i;
    		people=i;
    		//cout<<"sum:"<<sum<<endl;
    		if(sum>=d)break;
    	}
    	cout<<people<<endl;
    }
}
