#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n--){
		int val_1,val_2;
		cin >> val_1 >> val_2;
		
		bool found = false;

		for(int i=0;i<val_1;i++){
			int score_1 = i;
			int score_2 = val_1 - i;
			int diff = score_1 - score_2;
			
			if((score_1 - score_2) < 0) diff = -(score_1 - score_2);
			
			if(diff == val_2){
				if(score_1 < score_2) {
					int tmp = score_1;
					score_1 = score_2;
					score_2 = tmp;
				}
				cout << score_1 << " " << score_2 << endl;
				found = true;
				break;
			}
		}
		
		if(!found) {
			 cout << "impossible" << endl;
		}
	}
	return 0;
}