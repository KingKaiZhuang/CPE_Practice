#include <iostream>
#include <vector>
using namespace std;

int result=1;

void calculateNum(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i]-'0';
    }
    //cout<<sum<<endl;
    if(sum%9!=0){
        result=0;
        //cout<<s<<" is not a multiple of 9."<<endl;
    }else{
        if(sum!=9){
            result++;
            string tmp=to_string(sum);
            //cout<<"tmp:"<<tmp<<endl;
            calculateNum(tmp);
        }
    }
}

int main() {
    string s;
    while(cin>>s){
        if(s=="0") break;
        result=1;
        calculateNum(s);
        
        if(result == 0){
            cout << s << " is not a multiple of 9." << endl;
        } else {
            cout << s << " is a multiple of 9 and has 9-degree " << result << "." << endl;
        }     
    }

}
