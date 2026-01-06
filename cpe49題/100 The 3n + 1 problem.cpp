#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		cout << n << " " << m << " ";
		if(n > m){
			int c = n;
			n = m;
			m = c;
		}
		
		int tmp;
		
		int result;
		vector<int>seq;
		
		for(int i=n;i<=m;i++){
			int time=1;
			tmp = i;
			while(tmp != 1){
				if(tmp % 2 != 0){
					tmp=3*tmp+1;
				} else {
					tmp /= 2;
				}
				time++;		
			}
			seq.push_back(time);
		}
		
		int max = *max_element(seq.begin(),seq.end());		
		
		cout << max << endl;
	}
}
