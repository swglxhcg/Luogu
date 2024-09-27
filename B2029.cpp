#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

const float pi=3.14;

int main(){
	int h,r;
	double tv;
	cin >> h >>r;
	tv=pi*pow(r,2)*h;
	int tc=ceil(20000.0/tv);
	cout<<tc;
	return 0;
}
