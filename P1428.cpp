#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,a[200],m[200];
	memset(a,sizeof(a),0);
	memset(m,sizeof(m),0);
	m[0]=0;
	cin>>n;
	for(int i=0;i<n;i++){
		//TODO
		cin>>a[i];
		if(a[i]){
			int l=0;
			for(int j=i;j>=0;j--){
				//TODO
				if(a[j]<a[i])l++;
			}
			m[i]=l;
		}
	}
	for(int i=0;i<n;i++){
		//TODO
		cout<<m[i]<<' ';
	}
	
	
	return 0;
}
