#include<bits/stdc++.h>
using namespace std;

int a[5][400];
void wra(int djw,int num){
	int hn=djw*4;
	char tmpa[16]="";
	switch(num){
	case 0:
		strcpy(tmpa,"111101101101111");
		break;
	case 1:
		strcpy(tmpa,"001001001001001");
		break;
	case 2:
		strcpy(tmpa,"111001111100111");
		break;
	case 3:
		strcpy(tmpa,"111001111001111");
		break;
	case 4:
		strcpy(tmpa,"101101111001001");
		break;
	case 5:
		strcpy(tmpa,"111100111001111");
		break;
	case 6:
		strcpy(tmpa,"111100111101111");
		break;
	case 7:
		strcpy(tmpa,"111001001001001");
		break;
	case 8:
		strcpy(tmpa,"111101111101111");
		break;
	case 9:
		strcpy(tmpa,"111101111001111");
		break;
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			a[i][hn+j]=tmpa[3*i+j]-'0';
		}
	}
}

int main(){
	memset(a,0,sizeof(a));
	//memset(b,0,sizeof(b));
	//memset(bb,0,sizeof(bb));
	int n;
	cin>>n;
	char c;
	for(int i=0;i<n;i++){
		cin>>c;
		wra(i,c-'0');
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4*n-1;j++){
			printf("%c",(a[i][j]==1)?'X':'.');
		}
		cout<<endl;
	}
	
	return 0;
}
