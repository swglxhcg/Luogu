#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,a;
	cin>>n;
	int maxn=-99999,minn=99999;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a>maxn)maxn=a;
		if(a<minn)minn=a;
	}
	cout<<maxn-minn<<endl;
	
	return 0;
}
