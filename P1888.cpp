#include<bits/stdc++.h>
using namespace std;


int main() {
	int a,b,c,nma,nmi;
	cin>>a>>b>>c;
	nma=a;
	nmi=a;
	if(b>nma)nma=b;
	if(b<nmi)nmi=b;
	if(c>nma)nma=c;
	if(c<nmi)nmi=c;
	if(b>nma)nma=b;
	if(b<nmi)nmi=b;
	while(nmi%2==0&&nma%2==0){
		nmi/=2;
		nma/=2;
	}
	printf("%d/%d",nmi,nma);
	return 0;
}
