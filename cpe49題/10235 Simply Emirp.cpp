#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		//cout<<"n:"<<n<<endl;
		
		vector<int>primeList;
		bool isPrime=false;
		
		for(int i=1;i<=n;i++){
			if(n%i==0){
				primeList.push_back(i);
			}
		}
		
		//cout<<"First Size:"<<primeList.size()<<endl;
		
		if(primeList.size()>2){
			cout<<n<<" is not prime."<<endl;
			continue;
		}else{
			isPrime=true;
		}
		
		primeList.clear();
		
		//cout<<"clear primeList Size Check:"<<primeList.size()<<endl;
		
		string num=to_string(n);
		string revTmp="";
		
		for(int i=num.length()-1;i>=0;i--){
			revTmp+=num[i];
		}
		
		int revNum=stoi(revTmp);
		//cout<<"revNum:"<<revNum<<endl;
		
		if(n==revNum){
			if(isPrime){
				cout<<n<<" is prime."<<endl;
				continue;
			}else{
				cout<<n<<" is not prime."<<endl;
				continue;
			}
		}
		
		for(int i=1;i<=revNum;i++){
			if(revNum%i==0){
				primeList.push_back(i);
			}
		}
		//cout<<"revPrimeList check:"<<primeList.size()<<endl;
		
		if(isPrime&&primeList.size()==2){
			cout<<n<<" is emirp."<<endl;
		}else{
			cout<<n<<" is prime."<<endl;
		}
		

	}
}
# 方法二
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	if(n==0 || n==1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int reverseFun(int n){
	int r=0;
	int tmp=0;
	while(n>0){
		tmp=n%10;
		r=r*10+tmp;
		n/=10;
	}
	return r;
}

int main(){
	int n;
	while(cin>>n){
		int rNum=reverseFun(n);
		bool Prime=isPrime(n);		
		bool rPrime=isPrime(rNum);
		
		if(!Prime){
			cout<<n<<" is not prime."<<endl;
		}else if(Prime&&rPrime&&(rNum!=n)){
			cout<<n<<" is emirp."<<endl;
		}else{
			cout<<n<<" is prime."<<endl;
		}
	}
}
