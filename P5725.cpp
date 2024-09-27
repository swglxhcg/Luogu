#include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	int cn=1;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%02d",cn);
			cn++;
		}
		cout<<endl;
	}
	cout<<endl;
	cn=1;
	int s=0;
	for(int i=0;i<n;i++){
		s=n-1-i;
		while(s){
			cout<<"  ";
			s--;
		}
		for(int j=1+i;j>0;j--){
			printf("%02d",cn);
			cn++;
		}
		cout<<endl;
	}
	
	return 0;
}
