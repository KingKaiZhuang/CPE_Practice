#include <bits/stdc++.h>

using namespace std;

int GCD(int a,int b){
	int end=max(a,b);
	int max=0;
	for(int i=1;i<=end;i++){
		if(a%i==0 && b%i==0){
			max=i;
		}
	}
	return max;
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)continue;
		int g=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				g+=GCD(i,j);
			}

		}
	
		cout<<g<<endl;
	}
}
