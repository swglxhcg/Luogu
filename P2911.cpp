#include<bits/stdc++.h>
using namespace std;

int nums[80];


int main() {
	memset(nums,0,sizeof(nums));
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				nums[i+j+k]++;
			}
		}
	}
	int maxa=-1;
	short a=0;
	for(int i=s1+s2+s3;i>=0;i--){
		if(nums[i]>=maxa){
			maxa=nums[i];
			a=i;
		}
	}
	cout<<a;
	
	return 0;
}
