#include<bits/stdc++.h>
using namespace std;

bool roadlight[2000005];
int n;
double a;
int t,b;

int main() {
	memset(roadlight,0,sizeof(roadlight));
	cin>>n;
	while(n){
		cin>>a>>t;
		for(int i=1;i<=t;i++){
			b=a*i;
			roadlight[b]=!roadlight[b];
		}
		
		n--;
	}
	int rlt=0;
	while(!roadlight[rlt]){
		rlt++;
	}
	cout<<rlt;
	return 0;
}
