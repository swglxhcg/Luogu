#include<bits/stdc++.h>
using namespace std;

int a[6005],nmi=-1,n,m,sum=0;

int main() {
	memset(a,0,sizeof(a));
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		if(n==m){
			sum+=a[i];
		}
	}
	for(int i=0;i<n-m;i++){
		sum=0;
		for(int j=0;j<m;j++){
			sum+=a[i+j];
		}
		if(sum<nmi||nmi==-1)nmi=sum;
	}
	if(nmi==-1)nmi=sum;
	cout<<nmi;
	return 0;
}
