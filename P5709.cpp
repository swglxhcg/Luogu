#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int m,t,s,r;
	cin>>m>>t>>s;
	if(t<=0){
		cout<<0;
		return 0;
	}
	int eated=ceil(s*1.0/t);
	r=m-eated;
	if(r<=0)r=0;
	cout<<r;
	return 0;
}
