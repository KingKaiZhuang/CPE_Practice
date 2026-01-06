#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n == 0) break;
		vector<int>list;
		int hasOne = 0;
		while(n > 0){
			list.push_back(n%2);
			n /= 2;
		}
		cout << "The parity of ";
		for(int i=list.size()-1;i>=0;i--) {
			cout << list[i];
			if(list[i] == 1){
				hasOne++;
			}
		}
		cout << " is " << hasOne <<  " (mod 2).";
		cout << endl;
	}
}

// 法二
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		vector<int>seq;
		int result = 0;
		int tmp=n;
		
		while(tmp>0){			
			result += tmp & 1;
			seq.push_back(tmp & 1);
			tmp >>= 1;		
		}
		cout << "The parity of ";
		for(int i=(int)seq.size()-1;i>=0;i--){
			cout << seq[i];
		}
		cout << " is " << result << " (mod 2)." << endl;
	}
}
