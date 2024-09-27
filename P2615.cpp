#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

#define N 40

int main(){
	int hf[N][N];
	memset(hf,0,sizeof(hf));
	int n;
	cin>>n;
	int dx=0,dy=n/2;
	hf[dx][dy]=1;
	for(int i=2;i<=pow(n,2);i++){
		dx-=1;
		dy+=1;
		if(dx<0)dx+=n;
		else if(dx>=n)dx-=n;
		if(dy<0)dy+=n;
		else if(dy>=n)dy-=n;
		if(hf[dx][dy]!=0){
			dx+=2;
			dy--;
		}
		if(dx<0)dx+=n;
		else if(dx>=n)dx-=n;
		if(dy<0)dy+=n;
		else if(dy>=n)dy-=n;
		hf[dx][dy]=i;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<hf[i][j]<<' ';
			//printf("%5d",hf[i][j]);
		}
		cout<<endl;
	}
	
	return 0;
}
