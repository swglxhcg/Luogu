#include<bits/stdc++.h>
#define INF 10000005
using namespace std;

int alln[INF],prm[INF],cnt=0,rcnt=0,pcnt=0,rltt[INF];
int a,b,alen=0,blen=0;

void genper(int endn){
	//0p, 1np
	alln[1]=1;
	for(int i=2;i<=endn;i++){
		if(alln[i]==0){
			prm[cnt++]=i;
		}
		for(int j=0;j<cnt&&i*prm[j]<=endn;j++){
			alln[prm[j]*i]=1;
			if(i%prm[j]==0)break;
		}
	}
}


int main() {
	
	//int d1,d2,d3,d4,d5,pali;
	memset(alln,0,sizeof(alln));
	memset(prm,0,sizeof(prm));
	//memset(rltt,0,sizeof(rltt));
	//cout<<(3.0==3);
	cin>>a;
	genper((a<INF)?(a):(INF));
	for(int i=0;i<cnt&&prm[i]<a;i++){
		if(a%prm[i]==0){
			b=prm[i];
			break;
		}
	}
	cout<<a/b;
	return 0;
}
