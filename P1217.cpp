/*#include<bits/stdc++.h>
#define INF 100000005
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

int getintlen(int n){
	int c=0;
	while(n!=0){
		n/=10;
		c++;
	}
	return c;
}

void pltrlt(int n){
	
	if(alln[n]==0&&n>=a&&n<=b){
		cout<<n<<endl;
	}
}

int main() {
	
	int d1,d2,d3,d4,d5,pali;
	memset(alln,0,sizeof(alln));
	memset(prm,0,sizeof(prm));
	memset(rltt,0,sizeof(rltt));
	cin>>a>>b;
	genper(b);
	alen=getintlen(a);
	blen=getintlen(b);
	for(int i=alen;i<=blen;i++){
		switch(i){
			case 1:
				for(d1=1;d1<10;d1++){
					pali=d1;
					pltrlt(pali);
				}
				break;
			case 2:
				pali=11;
				pltrlt(pali);
				break;
			case 3:
				for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
					for (d2 = 0; d2 <= 9; d2++) {
						pali = 100*d1 + 10*d2 + d1;//(处理回文数...)
						pltrlt(pali);
					}
				}
				break;
			case 5:
				for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
					for (d2 = 0; d2 <= 9; d2++) {
						for (d3 = 0; d3 <= 9; d3++) {
							pali = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
							pltrlt(pali);
						}
					}
				}
				break;
			case 7:
				for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
					for (d2 = 0; d2 <= 9; d2++) {
						for (d3 = 0; d3 <= 9; d3++) {
							for(d4=0;d4<10;d4++){
								pali = 1000000*d1+100000*d2+10000*d3 + 1000*d4 +100*d3 + 10*d2 + d1;//(处理回文数...)
								pltrlt(pali);
							}
						}
					}
				}
			break;
			case 9:
				for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
					for (d2 = 0; d2 <= 9; d2++) {
						for (d3 = 0; d3 <= 9; d3++) {
							for(d4=0;d4<10;d4++){
								for(d5=0;d5<10;d5++){
									pali = 100000000*d1+10000000*d2+1000000*d3+100000*d4+10000*d5 + 1000*d4 +100*d3 + 10*d2 + d1;//(处理回文数...)
									
									pltrlt(pali);
								}
								
							}
						}
					}
				}
				break;
		}
	}
	return 0;
}*/
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

int getintlen(int n){
	int c=0;
	while(n!=0){
		n/=10;
		c++;
	}
	return c;
}

void pltrlt(int n){
	
	if(alln[n]==0&&n>=a&&n<=b){
		cout<<n<<endl;
	}
}

int main() {
	
	int d1,d2,d3,d4,d5,pali;
	memset(alln,0,sizeof(alln));
	memset(prm,0,sizeof(prm));
	memset(rltt,0,sizeof(rltt));
	cin>>a>>b;
	genper((b>9989900)?(9989900):b);
	alen=getintlen(a);
	blen=getintlen(b);
	for(int i=9989900;i<INF;i++){
		alln[i]=1;
	}
	for(int i=alen;i<=blen;i++){
		switch(i){
		case 1:
			for(d1=1;d1<10;d1++){
				pali=d1;
				pltrlt(pali);
			}
			break;
		case 2:
			pali=11;
			pltrlt(pali);
			break;
		case 3:
			for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
				for (d2 = 0; d2 <= 9; d2++) {
					pali = 100*d1 + 10*d2 + d1;//(处理回文数...)
					pltrlt(pali);
				}
			}
			break;
		case 5:
			for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
				for (d2 = 0; d2 <= 9; d2++) {
					for (d3 = 0; d3 <= 9; d3++) {
						pali = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
						pltrlt(pali);
					}
				}
			}
			break;
		case 7:
			for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
				for (d2 = 0; d2 <= 9; d2++) {
					for (d3 = 0; d3 <= 9; d3++) {
						for(d4=0;d4<10;d4++){
							pali = 1000000*d1+100000*d2+10000*d3 + 1000*d4 +100*d3 + 10*d2 + d1;//(处理回文数...)
							pltrlt(pali);
						}
					}
				}
			}
			break;
			
		}
	}
	return 0;
}
