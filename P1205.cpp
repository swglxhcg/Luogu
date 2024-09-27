#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

#define N 15
char srcP[N][N],midPa[N][N],finP[N][N],midPb[N][N];
int n;
//int rlt=0;

bool isSame(){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(midPb[i][j]!=finP[i][j])return false;
		}
	}
	return true;
}

void Debug(char tempa[N][N]){
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tempa[i][j];
		}
		cout<<endl;
	}
}

void change(int koc){
//	if(koc!=5){
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				midPa[i][j]=srcP[i][j];
//			}
//		}
//	}
	//cout<<endl<<koc<<':'<<endl;
	//Debug(midPa);
	switch (koc) {
	case 1:
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[j][n-i-1]=midPa[i][j];
			}
		}
		break;
	case 2:
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[i][j]=midPa[n-i-1][n-j-1];
			}
		}
		break;
	case 3:
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[j][n-i-1]=midPa[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPa[i][j]=midPb[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[i][j]=midPa[n-i-1][n-j-1];
			}
		}
		break;
	case 4:
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[i][j]=midPa[i][n-j-1];
			}
		}
		break;
	case 5:
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				midPb[i][j]=midPa[n-i-1][j];
//			}
//		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[i][j]=midPa[i][n-j-1];
			}
		}
		break;
	case 6:
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPb[i][j]=midPa[i][j];
			}
		}
		break;
	}
	//cout<<endl;
	//Debug(midPb);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			midPa[i][j]=midPb[i][j];
//		}
//	}
}

char getTrueChar(){
	char tc;
	tc=getchar();
	while(tc=='\n')tc=getchar();
	return tc;
}

int main(){
	char tc;
	memset(srcP,0,sizeof(srcP));
	memset(finP,0,sizeof(finP));
	memset(midPa,0,sizeof(midPa));
	memset(midPb,0,sizeof(midPb));
	//char tc;
	cin>>n;
	//fflush(stdin);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>srcP[i][j];
			//scanf("%c",&tc);
//			tc=getTrueChar();
//			srcP[i][j]=tc;
		}
		//fflush(stdin);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>finP[i][j];
			//scanf("%c",&tc);
//			tc=getTrueChar();
//			finP[i][j]=tc;
		}
		//fflush(stdin);
	}
	
	
	for(int i=1;i<5;i++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPa[i][j]=srcP[i][j];
			}
		}
		change(i);
			if(isSame()){
				cout<<i<<endl;
				return 0;
			}
			
	}
	
	for(int j=1;j<=3;j++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPa[i][j]=srcP[i][j];
			}
		}
		change(5);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				midPa[i][j]=midPb[i][j];
			}
		}
		change(j);
		if(isSame()){
			cout<<5<<endl;
			return 0;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			midPa[i][j]=srcP[i][j];
		}
	}
	change(6);
	if(isSame()){
		cout<<6;
		return 0;
	}
	cout<<7<<endl;
	return 0;
}
