#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int tmp;
		vector<int>numList;
		while(true){
			cin>>tmp;
			numList.push_back(tmp);
			if(cin.get()=='\n'){
				break;
			}
		}
		
		int max=numList.size()-1;
		int sum=0;
		for(int i=0;i<max;i++){
			sum=sum*n+numList[i]*(max-i);
		}
		cout<<sum<<endl;
	}
}
