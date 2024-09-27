#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	int maxl=-999,curl;
	int a[99999];
	memset(a,sizeof(a),0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		curl=0;
		for(int j=i;j<=n;j++){
			if(a[j+1]!=a[j]+1)break;
			curl++;
		}
		if(curl>maxl)maxl=curl;
	}
	cout<<maxl+1<<endl;
	
	return 0;
}
