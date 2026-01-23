#include <bits/stdc++.h>

using namespace std;

int toTen(string s1){
	int sum=0;
	int add=1;
	for(int i=s1.length()-1;i>=0;i--){
		if(s1[i]=='1'){
			sum+=add;
		}
		add=add*2;
	}
	return sum;
}

int loveFun(int x,int y){
	while(y!=0){
		int tmp=x%y;
		x=y;
		y=tmp;
	}
	return x;
}

int main(){
	int n,caseNum=1;
	cin>>n;
	while(n--){
		string s1,s2;		
		cin>>s1>>s2;
		
		int x=toTen(s1);
		int y=toTen(s2);
		
		int love=loveFun(x,y);
		
		if(love>1){
			cout<<"Pair #"<<caseNum<<": All you need is love!"<<endl;
		}else{
			cout<<"Pair #"<<caseNum<<": Love is not all you need!"<<endl;
		}
		caseNum++;
	}
}
