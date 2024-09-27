#include<bits/stdc++.h>
using namespace std;


int main() {
	bool flag=true;
	int k=0;
	int x=0;
	int n=0,m=0;
	cin>>n;
	while(flag){
		k++;
		for(x=1;m<=n&&x<=100;x++){
			m=52*(x*7+21*k);
			//printf("m%d=x%d*k%d\n",m,x,k);
			if(m>n)continue;
			if(m==n){
				flag=false;
				break;
			}
		}
	}
	//cout<<m<<endl;
	cout<<x<<endl<<k<<endl;
	
	return 0;
}
