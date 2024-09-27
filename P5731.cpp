#include<bits/stdc++.h>
using namespace std;

int sfz[10][10],n;
int tusi[4][2]={
	{0,1},
	{1,0},
	{0,-1},
	{-1,0}
};
int tusign=0;
int curxy[2]={0,0};
int nums=1;

void turnnow(){
	tusign++;
	tusign=tusign%4;
}

void Debug(){
	printf("Put %d in (%d,%d):\n",nums,curxy[0],curxy[1]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",sfz[i][j]);
		}
		cout<<endl;
	}
}

int main() {
	memset(sfz,0,sizeof(sfz));
	cin>>n;
	while(!sfz[curxy[0]][curxy[1]]){
		
		sfz[curxy[0]][curxy[1]]=nums;
		//Debug();
		nums++;
		if(nums>n*n)break;
		if(curxy[0]+tusi[tusign][0]>=n||curxy[1]+tusi[tusign][1]>=n||curxy[0]+tusi[tusign][0]<0||curxy[1]+tusi[tusign][1]<0){
			turnnow();
			
		}
		if(sfz[curxy[0]+tusi[tusign][0]][curxy[1]+tusi[tusign][1]])
			turnnow();
		curxy[0]+=tusi[tusign][0];
		curxy[1]+=tusi[tusign][1];
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",sfz[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
