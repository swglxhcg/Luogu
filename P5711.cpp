#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,r=0;
	cin>>n;
	if(n%4==0&&n%100!=0)r=1;
	else if(n%400==0)r=1;
	cout<<r;
	return 0;
}
