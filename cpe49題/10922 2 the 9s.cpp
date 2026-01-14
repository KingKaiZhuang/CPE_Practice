#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	while(cin>>s){
		if(s=="0")break;
		//cout<<s<<endl;
		vector<int>nineList;
		for(int i=0;i<s.length();i++){
			char tmp=s[i];
			nineList.push_back(tmp-'0');
		}
		
		int sum=0;
		for(int i=0;i<nineList.size();i++){
			sum+=nineList[i];
		}
		cout<<sum<<endl;
		
		int nineCase=0;
		while(sum<=9){
		
		}

		
		/*if((sum%9)==0){
			while(sum>=9){
				
			}
		}*/
		cout<<nineCase<<endl;
	}
}
