#include<bits/stdc++.h>
using namespace std;

int a[105]={0},n,r=0,b[105]={0};

int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(i==j)break;
				if(k==i||k==j)continue;
				if(a[k]==a[i]+a[j]){
					b[k]++;
					//printf("%d+%d=%d\n",a[i],a[j],a[k]);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]!=0)r++;
	}
	cout<<r;
	return 0;
}
