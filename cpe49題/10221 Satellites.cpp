#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	double s,a;
	string min_deg;
	while(cin>>s>>a>>min_deg){
		if(min_deg=="min"){
			a/=60;
		}
		if(a>180){
			a=a-180;
		}
		double ang=a*(M_PI/180);
		double arc=(6440+s)*ang;
		double chord=(2*((6440+s)*sin(ang/2)));
		cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	}
}
