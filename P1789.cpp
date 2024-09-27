#include<bits/stdc++.h>
using namespace std;

int maps[200][200]={0};
int n,m,k;
int hb[5][5]={
	{0,0,1,0,0},
	{0,1,1,1,0},
	{1,1,1,1,1},
	{0,1,1,1,0},
	{0,0,1,0,0}
};
int ys[5][5]={
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1}
};

void pntMaps(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//TODO
			printf("%5d",maps[i][j]);
			
		}
		cout<<endl;
	}
}

void setl(int x,int y){
	if(x<n&&y<n&&x>=0&&y>=0){
		maps[y][x]++;
	}
}
void putdx(short cl,short x,short y){
	short tx=x-2-1,ty=y-2-1;
	short ad=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			//TODO
			ad=0;
			if(cl==0){
				ad=hb[i][j];
			}else{
				ad=ys[i][j];
			}
			if(ad==1){
				setl(tx+j,ty+i);
			}
		}
	}
	//printf("Put %s in (%hd,%hd):\n",(cl==0)?("Hb"):("YS"),x,y);
	//pntMaps();
}



int main() {
	memset(maps,0,sizeof(maps));
	cin>>n>>m>>k;
	short x=0,y=0;
	int cnt=0;
	for(int i=0;i<m;i++){
		//TODO
		cin>>x>>y;
		putdx(0,x,y);
	}
	for(int i=0;i<k;i++){
		//TODO
		cin>>x>>y;
		putdx(1,x,y);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//TODO
			if(maps[i][j]==0){
				//TODO
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
