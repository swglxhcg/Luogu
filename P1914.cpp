#include<bits/stdc++.h>
using namespace std;

string a;
int n;

int main() {
	cin>>n>>a;
	for(size_t i=0;i<a.size();i++){
		a[i]=(a[i]-'a'+n)%26+'a';
	}
	cout<<a;
	return 0;
}
