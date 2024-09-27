#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int prims[N]={0};
bool pdsz[N];	//0=sz,1!=sz
int ptr=0;

void getPrim(int n1){
	for(int i=1;i<=n1;i++){
		if(pdsz[i]==0)prims[ptr++]=i;
		for(int j=0;j<ptr&&i*prims[j]<=n1;j++){
			pdsz[prims[j]*i]=1;
			if(i%prims[j]==0)break;
		}
	}
}

int main() {
	int n;
	int a[105];
	int maxn=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>maxn)maxn=a[i];
	}
	
	memset(prims,0,sizeof(prims));
	memset(pdsz,0,sizeof(pdsz));
	pdsz[0]=false;
	pdsz[1]=1;
	pdsz[2]=0;
	getPrim(1e5);
	for(int i=0;i<n;i++){
		if(pdsz[a[i]]==0){
			if(i==n-1){
				cout<<a[i];
			}else{
				cout<<a[i]<<' ';
			}
		}
	}
	
	return 0;
}
