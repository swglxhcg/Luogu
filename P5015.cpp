#include<bits/stdc++.h>
using namespace std;

string a;

int main() {
	getline(cin,a);
	int rlt=a.length();
	for(auto c:a){
		if(c==' ')rlt--;
	}
	cout<<rlt;
	
	return 0;
}
