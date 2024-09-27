#include<bits/stdc++.h>
using namespace std;

int n,te,flag=0,alt=0;


int main() {
	cin>>n;
	while(alt<n*n){
		cin>>te;
		for(int i=0;i<te;i++,alt++){
			if(alt!=0&&alt%n==0)cout<<endl;
			cout<<flag%2;
			
		}
		flag++;
		
	}
	
	return 0;
}
