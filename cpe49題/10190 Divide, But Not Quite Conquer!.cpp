#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m;
	bool ok = true;
	while(cin>>n>>m){
		if(n <= 1 || m <= 1){
			cout << "Boring!" << endl;
			continue;
		}
		
		vector<int> seq;
		seq.push_back(n);
		
		while(n != 1) {
			if(n%m != 0){
				ok = false;
				break;
			}
			n /= m;
			ok = true;
			seq.push_back(n);
		}
		
		if(!ok){
			cout << "Boring!";
		} else {
			cout << seq[0];
			for(int i=1;i < (int)seq.size();i++){
				cout << " " << seq[i];
			}
		}
		
		cout << endl;
			
	}
}
