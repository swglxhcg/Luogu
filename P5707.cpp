#include<bits/stdc++.h>
using namespace std;


int main() {
	double s,v;
	int et=8*60+24*60;
	cin>>s>>v;
	int rt=ceil(s/v);
	int dt=et-rt-10;
	if(dt>=24*60)dt-=24*60;
	int m=dt%60;
	int h=dt/60;
	printf("%02d:%02d",h,m);
	
	return 0;
}
