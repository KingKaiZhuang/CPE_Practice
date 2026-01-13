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
		for(int i=0;i<hartalArray.size();i++){
			tmp2=hartalArray[i];
			while(tmp2<=N){
				day[tmp2]=1;
				tmp2+=hartalArray[i];
			}			
		}
		int result=0;
		for(int i=1;i<=N;i++){
			if(day[i]==1){
				if(i%7!=6&&i%7!=0){
					result++;
				}
			}
		}
		cout<<result<<endl;
	}
}
