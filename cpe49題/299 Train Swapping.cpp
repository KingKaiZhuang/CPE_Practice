#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n--){
		vector<int>record;
		int l;		
		cin>>l;
		while(l--){
			int listNum;
			cin>>listNum;
			record.push_back(listNum);
		}
		
		int tmp;
		int changeCase=0;
		for(int i=0;i<record.size();i++){
			for(int j=1;j<record.size()-i;j++){
				if(record[j-1]>record[j]){
					tmp=record[j];
					record[j]=record[j-1];
					record[j-1]=tmp;
					changeCase++;
				}
			}
		}
		
		cout<<"Optimal train swapping takes "<<changeCase<<" swaps.";
		
		cout<<endl;
	}
}
