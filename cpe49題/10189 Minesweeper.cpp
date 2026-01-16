#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	bool flag=false;
	int sweeperCase=1;
	
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		
		char mineArr[100][100];
		int record[100][100]={0};
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>mineArr[i][j];
			}
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mineArr[i][j]=='*'){
					for(int k=i-1;k<=i+1;k++){
						for(int p=j-1;p<=j+1;p++){
							if(k>=0 && k<n && p>=0 && p<m){
								record[k][p]++;
							}
						}
					}
				}
			}
		}
		
		if(flag)cout<<endl;
		
		cout<<"Field #"<<sweeperCase++<<":"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mineArr[i][j]=='*'){
					cout<<'*';
					continue;
				}
				cout<<record[i][j];
			}
			cout<<endl;
		}
		
		flag=true;
	}
} 
