#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,k;
	int suma=0,sumb=0;
	int na=0,nb=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		//TODO
		if(i%k==0){
			suma+=i;
			na++;
		}else{
			sumb+=i;
			nb++;
		}
	}
	printf("%.1lf %.1lf\n",(1.0*suma/na),(1.0*sumb/nb));
	
	return 0;
}
