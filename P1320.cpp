#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	string s,a;
	cin>>s;
	//cout<<"s"<<s<<endl;
	int len=s.length()-1;
	for(int i=0;i<len;i++){
		cin>>a;
		s=s+a;
	}
	//cout<<s;
	cout<<len+1<<" ";
	char cur='0';
	int cnt=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==cur){
			cnt++;
			continue;
		}else if(s[i]!=cur){
			cout<<cnt<<" ";
			cnt=1;
			cur=s[i];
		}
	}
	cout<<cnt;
	return 0;
}
