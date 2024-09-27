#include<bits/stdc++.h>
#define INF 99999
using namespace std;


int main() {
	int k;
	cin>>k;
	int s=1,c=1;
	long long d[INF],sum=0;
	memset(d,sizeof(d),0);
	for(int i=1;i<=k;){
		s=1;
		while(s<=c){
			d[i]=c;
			i++;
			s++;
		}
		c++;
	}
	for(int i=1;i<=k;i++){
		//TODO
		sum+=d[i];
		//cout<<d[i]<<' ';
	}
	cout<<sum;
	
	return 0;
}
