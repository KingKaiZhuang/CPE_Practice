#include <iostream>

using namespace std;

int main() {
	int n;
	
	while(cin >> n){
		int current = n;
		int empty = n;
		
		while(empty >= 3) {
			current += (empty / 3);
			empty = (empty / 3) + (empty % 3);
		}
		if(empty == 2) current += 1;
		cout << current << endl; 
	}
}