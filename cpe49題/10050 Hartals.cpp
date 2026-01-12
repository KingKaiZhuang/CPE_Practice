#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T,N,P;
	cin>>T;
	
	while(T--){
		cin>>N;
		cin>>P;
		int tmp;
		int day[N]={0};
		vector<int>hartalArray;
		for(int i=0;i<P;i++){
			cin>>tmp;
			hartalArray.push_back(tmp);
		}
		int tmp2=0;
		cout<<"N: "<<N<<endl;
		for(int i=0;i<hartalArray.size();i++){
			tmp2=hartalArray[i];
			cout<<"tmp2: "<<tmp2<<endl;
			while(tmp2<N){
				day[hartalArray[i]]=1;
				tmp2+=hartalArray[i];
			}			
		}
		int result=0;
		for(int i=0;i<N;i++){
			if(day[i]==1){
				result++;
			}
		}
		cout<<result<<endl;
	}
}
