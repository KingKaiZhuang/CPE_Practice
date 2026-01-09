// 尚未優化
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string n;
    while(cin>>n){
    	if(n=="0")break;
    	vector<int>list;
    	bool change=false;
    	int tmp=0;
    	int odd=0;
    	int even=0;
    	int result=0;
    	
		for(int i=0;i<n.length();i++){
			tmp=n[i]-'0';
			list.push_back(tmp);
		}
		
		for(int j=0;j<list.size();j++){
			list[j];
			if(change){
				odd+=list[j];
				change=false;
			}else{
				even+=list[j];
				change=true;
			}
		}
		result=abs(odd-even);
		if(result%11 == 0){
			cout<<n<<" is a multiple of 11."<<endl;
		}else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
    }
}
// 優化
#include <iostream>
#include <string> // 記得 include
#include <cmath>  // 為了 abs
using namespace std;

int main() {
    string n;
    while(cin >> n){
        if(n == "0") break;

        int odd_sum = 0;  // 奇數位總和
        int even_sum = 0; // 偶數位總和

        // 直接跑一次字串就可以了
        for(int i = 0; i < n.length(); i++){
            int digit = n[i] - '0'; // 轉成數字

            // 判斷是奇數位還是偶數位 (用 i % 2 判斷)
            if(i % 2 == 0){
                odd_sum += digit;
            } else {
                even_sum += digit;
            }
        }

        int diff = abs(odd_sum - even_sum);

        // 【修正點】用 % 11 來判斷是否整除
        if(diff % 11 == 0){
            cout << n << " is a multiple of 11." << endl;
        } else {
            cout << n << " is not a multiple of 11." << endl;
        }
    }
}
