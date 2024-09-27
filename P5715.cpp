#include<bits/stdc++.h>
using namespace std;


int main() {
	int a,b,c,d,e,f;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			f=a;
			if(b>c){
				e=b;
				d=c;
			}
		}else{
			e=a;
			d=b;
			f=c;
		}
	}else{
		if(a>c){
			d=c;
			e=a;
			f=b;
		}else{
			d=a;
			if(b>c){
				e=c;
				f=b;
			}else{
				e=b;
				f=c;
			}
		}
	}
	printf("%d %d %d",d,e,f);
	return 0;
}
