#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp;
	while(cin>>n){
		//cout<<n<<endl;
		vector<int>dream;
		for(int i=0;i<n;i++){
			cin>>tmp;
			dream.push_back(tmp);
		}
		
		sort(dream.begin(),dream.end());
		
		int max=0,min=0;
		int mid=n/2;
		if(n%2==0){
			max=dream[mid];
			min=dream[mid-1];
		}else{
			max=dream[mid];
			min=dream[mid];
		}
		
		//cout<<"max:"<<max<<endl;
		//cout<<"min:"<<min<<endl;
		
		int sum=0;
		for(int i=0;i<n;i++){
			if(min<=dream[i]&&max>=dream[i]){
				sum++;
			}
		}
		
		int posible=max-min+1;
		//cout<<"sum:"<<sum<<endl;
		cout<<min<<" "<<sum<<" "<<posible<<endl;
	}
}
