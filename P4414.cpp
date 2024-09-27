#include<bits/stdc++.h>
using namespace std;


int main() {
	int a[4],b[4];
	int fg[200]={0};
	memset(fg,sizeof(fg),0);
	char s[4];
	cin>>a[0]>>a[1]>>a[2];
	fg[a[0]]++;
	fg[a[1]]++;
	fg[a[2]]++;
	cin>>s;
	int n=0;
	for(int i=0;i<=100;i++){
		if(fg[i]==1)b[n]=i,n++;
	}
	for(int i=0;i<3;i++){
		switch (s[i]) {
		case 'A':
			//TODO
			cout<<b[0]<<' ';
			break;
		case 'B':
			//TODO
			cout<<b[1]<<' ';
			break;
		case 'C':
			//TODO
			cout<<b[2]<<' ';
			break;
		}
	}
	
	return 0;
}
