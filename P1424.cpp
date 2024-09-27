#include<bits/stdc++.h>
using namespace std;


int main() {
	int x,n;
	long long tl=0;
	cin>>x>>n;
	for(int i=x;i<n+x;i++){
		if(i%7!=6&&i%7!=0){
			tl+=250;
		}
	}
	cout<<tl<<endl;
	return 0;
}
