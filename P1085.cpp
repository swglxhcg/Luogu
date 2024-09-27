#include<bits/stdc++.h>
using namespace std;


int main() {
	int st,et,tt,rtt=0,rw=0;
	for(int i=1;i<=7;i++){
		cin>>st>>et;
		tt=st+et-8;
		if(rtt<tt){
			rtt=tt;
			rw=i;
		}
	}
	cout<<rw<<endl;
	
	return 0;
}
