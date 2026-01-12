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
// 整理過後
#include <iostream>
#include <vector>
using namespace std;

void jollyFun(int n){
	vector<int>list;
	int tmp;
	bool isJolly=true;
	for(int i=0;i<n;i++){
		cin>>tmp;
		list.push_back(tmp);
	}
	
	vector<bool>seq(n,false);
	for(int i=1;i<list.size();i++){
		int diff=abs(list[i]-list[i-1]);
		if(diff>0&&diff<=n-1){
			seq[diff]=true;
		}else{
			seq[diff]=false;
			break;
		}
	}
	
	for(int i=1;i<n;i++){
		if(seq[i]==false){
			isJolly=false;
			break;
		}
	}
	
	if(isJolly){
		cout<<"Jolly"<<endl;
	}else{
		cout<<"Not jolly"<<endl;
	}
}

int main() {
	int n;
	
	while(cin>>n){
		jollyFun(n);
	}
}

// set 比對方式
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int caseNum=1;

void b2Sequence(int n){
	vector<int>num;
	bool ok=true;
	int tmp1;
	for(int i=0;i<n;i++){
		cin>>tmp1;
		num.push_back(tmp1);
	}
	
	
	for(int i=0;i<num.size()-1;i++){
		if(num[i]>=num[i+1]){
			ok=false;
			break;
		}
	}
	
	if(ok){
		set<int>record;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				int tmp2=num[i]+num[j];
				if(record.count(tmp2)){
					ok=false;
					break;
				}
				record.insert(tmp2);
			}
		}
		if(ok){
			cout<<"Case #"<<caseNum++<<": It is a B2-Sequence."<<endl;
		}else{
			cout<<"Case #"<<caseNum++<<": It is not a B2-Sequence."<<endl;
		}
		cout<<endl;
	}

}

int main() {
    int n;
    while(cin>>n){
    	b2Sequence(n);
    }
}
