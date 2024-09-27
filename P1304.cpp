#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

int prims[N];
bool isPrim[N];
int ptr=0;

void genPrims(int prims_num=1e4+100){
	
	isPrim[0]=0;
	isPrim[1]=0;
	isPrim[2]=1;
	isPrim[3]=1;
	for(int i=2;i<=prims_num;i++){
		if(isPrim[i]) prims[++ptr]=i;
		for(int j=1;j<=ptr&&i*prims[j]<=prims_num;j++){
			isPrim[i*prims[j]]=0;
			if(i%prims[j]==0)break;
		}
	}
}

void genSolute(int num){
	int j=1;
	while(j<=ptr&&prims[j]<num){
		if(isPrim[num-prims[j]]){
			printf("%d=%d+%d\n",num,prims[j],num-prims[j]);
			break;
		}
		
		j++;
	}
}

int main() {
	
	memset(isPrim,1,sizeof(isPrim));
	genPrims();
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		genSolute(i);
	}
	
	return 0;
}
