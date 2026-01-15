#include <bits/stdc++.h>

using namespace std;

int main(){
	double s,a;
	string md;
	
	while(cin>>s>>a>>md){
		if(md=="min")a/=60;
		if(a>180)a=a-180;
		
		double angle=a*(M_PI/180);
		double arc=angle*(6440+s);
		double chord=((6440+s)*sin(angle/2))*2;
		
		cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	}
}
