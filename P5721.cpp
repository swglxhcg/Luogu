#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,s=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		//TODO
		for(int j=1;j<=n+1-i;j++){
			//TODO
			printf("%02d",s);
			s++;
		}
		cout<<endl;
	}
	
	return 0;
}
