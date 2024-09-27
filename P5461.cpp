#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#define MAXN 2048
using namespace std;

bool maps[MAXN][MAXN]; //maps[y][x];
int n;

void init(){
	// Init Map
	for(int i=0;i<MAXN;i++){
		for(int j=0;j<MAXN;j++){
			maps[i][j]=1;
		}
	}
}

void printMap(int _n){
	for(int i=0;i<pow(2,n);i++){
		for(int j=0;j<pow(2,n);j++){
//			if(j==0){
//				printf("%d",maps[j][i]?1:0);
//			}
			printf("%d ",maps[j][i]?1:0);
		}
		cout<<endl;
	}
}

void set0(int lx,int ly,int rx,int ry){
	for(int i=lx;i<rx;i++){
		for(int j=ly;j<ry;j++){
			maps[j][i]=0;
		}
	}
	//test
//	printMap(2^n);
//	cout<<endl;
}

void shemian(int lx,int ly,int rx,int ry){
//	test
//	printf("(%d, %d) to (%d, %d)\n",lx,ly,rx,ry);
//	system("pause");
	if(lx==rx-1&&ly==ry-1)return;
	//LT
	set0(lx,ly,lx+(rx-lx)/2,ly+(ry-ly)/2);
	//RT
	shemian(lx+(rx-lx)/2,ly,rx,ly+(ry-ly)/2);
	//LB
	shemian(lx,ly+(ry-ly)/2,lx+(rx-lx)/2,ry);
	//RB
	shemian(lx+(rx-lx)/2,ly+(ry-ly)/2,rx,ry);
}

int main(){
	init();
	cin>>n;
	shemian(0,0,pow(2,n),pow(2,n));
	printMap(2^n);
	return 0;
}
