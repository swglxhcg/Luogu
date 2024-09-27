#include<bits/stdc++.h>
using namespace std;


int main() {
	double m,h,r;
	cin>>m>>h;
	r=m/pow(h,2);
	if(r<18.5)cout<<"Underweight"<<endl;
	else if(r>=18.5&&r<24)cout<<"Normal"<<endl;
	else cout<<r<<endl<<"Overweight"<<endl;
	return 0;
}
