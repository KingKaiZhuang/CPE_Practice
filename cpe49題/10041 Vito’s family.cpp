#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	cin>>c;
	while(c--){
		int r,mid,sum=0;
		cin>>r;
		vector<int>s;
		
		int tmp=0;
		for(int i=0;i<r;i++){
			cin>>tmp;
			s.push_back(tmp);
		}
		
		sort(s.begin(),s.end());
		mid=s[r/2];
		for(int i=0;i<r;i++){
			sum+=abs(mid-s[i]);
		}
		cout<<sum<<endl;
	}
}
