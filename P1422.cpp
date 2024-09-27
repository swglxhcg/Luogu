#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	double rp;
	if(n<=150){
		rp=0.4463*n;
	}else if(n>150&&n<=400){
		rp=0.4463*150+0.4663*(n-150);
	}else{
		rp=0.4463*150+0.4663*250+0.5663*(n-400);
	}
	printf("%.1lf\n",rp);
	return 0;
}
