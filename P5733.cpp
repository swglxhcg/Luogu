#include<bits/stdc++.h>
using namespace std;

string s1,s2;

int main() {
	cin>>s1;
	for(int i=0;i<(int)s1.length();i++){
		if(s1[i]>='a'&&s1[i]<='z'){
			s1[i]+='A'-'a';
		}
	}
	cout<<s1;
	
	return 0;
}
