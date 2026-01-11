#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    while(cin>>n){
    	vector<int>list;
    	int tmp=0;
    	bool isJolly=true;
    	
    	for(int i=0;i<n;i++){
    		cin>>tmp;
    		list.push_back(tmp);
    	}
    	
    	vector<bool>hasdiff(n,false);
    	for(int i=1;i<list.size();i++){
    		int seqNum=abs(list[i]-list[i-1]);
    		if(seqNum>0&&seqNum<n){
    			hasdiff[seqNum]=true;
    		}
    	}
    	
    	for(int i=1;i<n;i++){
    		if(hasdiff[i]==false){
    			isJolly=false;
    			break;
    		}
    	}

    	if(isJolly){
    		cout<<"Jolly";
    	}else{
    		cout<<"Not jolly";
    	}
    	cout<<endl;
    }
}
