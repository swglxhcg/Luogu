#include<bits/stdc++.h>
using namespace std;


int main() {
	int tn,n;
	double sum=0;
	int maxn=-999,minn=999;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tn;
		sum+=tn;
		if(tn>maxn)maxn=tn;
		if(tn<minn)minn=tn;
	}
	printf("%.2lf",1.0*(sum-maxn-minn)/(n-2));
	
	return 0;
}
