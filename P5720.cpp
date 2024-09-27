#include<bits/stdc++.h>
using namespace std;


int main() {
	long long a;
	cin>>a;
	int r=0;
	while(a!=1){
		a=round(a/2);
		r++;
	}
	cout<<r+1<<endl;
	
	return 0;
}
