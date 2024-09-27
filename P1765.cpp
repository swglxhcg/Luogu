#include<bits/stdc++.h>
using namespace std;

int zmb[26];
int rlt;

int main() {
	for(int i=0;i<15;i++){
		zmb[i]=i%3+1;
	}
	for(int i=15;i<19;i++){
		zmb[i]=i-14;
	}
	for(int i=22;i<26;i++){
		zmb[i]=i-21;
	}
	zmb[19]=1;
	zmb[20]=2;
	zmb[21]=3;
	string ins;
	getline(cin,ins);
	for(auto chi: ins){
		if(chi==' ')rlt++;
		else{
			rlt+=zmb[chi-'a'];
		}
	}
	cout<<rlt;
	
	return 0;
}
