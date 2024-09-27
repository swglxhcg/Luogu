#include<bits/stdc++.h>
using namespace std;


int main() {
	long long n,pn,pr,ttr=0,tr=1e9+10;
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>pn>>pr;
		ttr=ceil(n/pn)+((n%pn!=0)?1:0);
		ttr*=pr;
		if(tr>ttr){
			tr=ttr;
		}
	}
	cout<<tr<<endl;
	
	return 0;
}
