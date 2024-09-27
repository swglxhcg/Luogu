#include<bits/stdc++.h>
#define INF 99999
using namespace std;


int main() {
	int n;
	cin>>n;
	int jcsz[INF],sumsz[INF];
	int jcszf=0,sumszf=0;	//数组位记号
	memset(jcsz,sizeof(jcsz),0);
	memset(sumsz,sizeof(sumsz),0);
	jcsz[0]=1;
	for(int i=1;i<=n;i++){	//i为当前阶乘底数
		//阶乘数组先乘，再加入sum数组
		for(int j=0;j<=jcszf;j++){
			jcsz[j]*=i;
		}
		
		for(int j=0;j<=((jcszf>=sumszf)?jcszf:sumszf);j++){
			sumsz[j]+=jcsz[j];
		}
		for(int j=0;j<=sumszf;j++){
			if(sumsz[j]>=10){
				sumsz[j+1]+=sumsz[j]/10;
				sumsz[j]=sumsz[j]%10;
				if(j+1>sumszf){
					sumszf=j+1;
				}
			}
		}
		for(int j=0;j<=jcszf;j++){
			if(jcsz[j]>=10){
				jcsz[j+1]+=jcsz[j]/10;
				jcsz[j]=jcsz[j]%10;
				if(j+1>jcszf){
					jcszf=j+1;
				}
			}
		}
	}
	int i=sumszf;
	while(i+1){
		cout<<sumsz[i];
		i--;
	}
	
	return 0;
}
