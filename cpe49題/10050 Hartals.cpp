#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t,n,p;
	cin>>t;
	
	while(t--){
		cin>>n>>p;
		
		int tmp;
		vector<int>partyNum;
		
		for(int i=0;i<p;i++){
			cin>>tmp;
			partyNum.push_back(tmp);
		}
		
		vector<bool>record(n+1,false);
		int tmp2;
		for(int i=0;i<partyNum.size();i++){
			tmp2=partyNum[i];
			while(tmp2<=n){
				record[tmp2]=true;
				tmp2+=partyNum[i];
			}
		}

		int result=0;
		for(int i=1;i<=n;i++){
			if(record[i]==true){
				if(i%7!=6&&i%7!=0){
					result++;
				}
			}
		}
		
		cout<<result<<endl;
	}
}
