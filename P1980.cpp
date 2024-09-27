#include<bits/stdc++.h>
using namespace std;


int main() {
	string s;
	int n,x,sum=0;
	
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		//TODO
		s=to_string(i);
		for(int i=0;i<s.length();i++){
			//TODO
			if(s[i]==x+'0')sum++;
		}
		
	}
	cout<<sum;
	
	return 0;
}
