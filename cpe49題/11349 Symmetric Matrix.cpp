#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,caseNum=1;
	cin>>t;
	
	while(t--){
		string s;
		bool isSymmetric = true;
		int arrayWide,array[100][100]={0};
		cin>>s>>s;
		cin>>arrayWide;
		
		for(int i=0;i<arrayWide;i++){
			for(int j=0;j<arrayWide;j++){
				int num;
				cin>>num;
				
				array[i][j]=num;
			}
		}
		
		for(int i=0;i<arrayWide;i++){
			for(int j=0;j<arrayWide;j++){
				if(array[i][j]<0){
					isSymmetric=false;
				}
				if(array[i][j]!=array[arrayWide-1-i][arrayWide-1-j]){
					isSymmetric=false;
				}
			}
		}
		
		if(isSymmetric){
			cout<<"Test #"<<caseNum++<<": Symmetric."<<endl;
		}else{
			cout<<"Test #"<<caseNum++<<": Non-symmetric."<<endl;	
		}
		
	}
}
