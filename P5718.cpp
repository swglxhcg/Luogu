#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	int a,minn=2000;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(minn>a)minn=a;
	}
	cout<<minn;
	
	
	return 0;
}
