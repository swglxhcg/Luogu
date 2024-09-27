#include<bits/stdc++.h>
using namespace std;

short boxa[25][25][25];
short w,x,h;

int main() {
	memset(boxa,0,sizeof(boxa));
	
	cin>>w>>x>>h;
	short x1,y1,z1,x2,y2,z2;
	short q;
	cin>>q;
	while(q){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				for(int k=z1;k<=z2;k++){
					boxa[i][j][k]++;
				}
			}
		}
		q--;
	}
	int su=0;
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				if(boxa[i][j][k]==0){
					su++;
				}
			}
		}
	}
	cout<<su;
	
	return 0;
}
