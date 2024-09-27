#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

#define N 500
int n,num[N],jcb[60][N];


void numJC(int w){
	
	for(int i=1;i<N;i++){
		jcb[w][i]=jcb[w-1][i]*w;
		jcb[w][i+1]+=(int)(jcb[w][i]/10);
		jcb[w][i]=jcb[w][i]%10;
	}
	for(int i=1;i<N;i++){
		num[i]=num[i]+jcb[w][i];
		num[i+1]+=(int)(num[i]/10);
		num[i]=num[i]%10;
	}
}

int main(){
	
	//memset(num,0,sizeof(num));
	for(int i=0;i<60;i++){
		jcb[i][0]=1;
	}
	num[0]=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		numJC(i);
	}
	int fl=0;
	for(int i=499;i>0;i--){
		if(!fl){
			if(num[i]!=0)fl=1;
			continue;
		}
		cout<<num[i];
	}
	return 0;
}
