#include<bits/stdc++.h>
using namespace std;


int main() {
	double s=0,ites=2.0,es=0;
	int i=0;
	cin>>s;
	while(es<=s){
		//cout<<ites<<endl;
		es+=ites;
		ites*=0.98;
		i++;
	}
	cout<<i<<endl;
	
	return 0;
}
