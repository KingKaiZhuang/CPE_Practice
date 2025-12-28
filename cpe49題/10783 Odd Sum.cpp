#include <iostream>

using namespace std;

int main() {
	int testTime;
	int a,b;
	int sum = 0;
	int batch = 1;
	if (!(cin >> testTime)) return 0; // 確保讀取到測試次數
	
	while(testTime--){
		cin >> a >> b;
		
		if(a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		
		for(int i=a;i<=b;i++){
			bool isOdd = (i % 2) != 0;
			if(isOdd) sum += i;
		}
		cout << "Case " << batch << ": " << sum << endl;
		sum = 0;
		batch++;
	}
}