#include<bits/stdc++.h>
using namespace std;


int main() {
	/*
	1. N/2-1
	-1. (M+1)*2
	2. (N/2-1)/2-1	
	*/
	int n,m=1;
	cin>>n;
	
	for(int i=0;i<n-1;i++){
		m=(m+1)*2;
	}
	cout<<m;
	
	return 0;
}
