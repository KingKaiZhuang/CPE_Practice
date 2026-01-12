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
