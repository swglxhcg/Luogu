#include<bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin>>s;
	bool isz=true;
	int len=s.size();
	if(len==1&&s[0]=='0'){
		cout<<0;
		return 0;
	}
	if(s[0]=='-'){
		cout<<'-';
		for(int i=len-1;i>0;i--){
			if(isz){
				if(s[i]!='0')isz=false;
			}
			if(isz){
				continue;
			}
			if(i==len-1&&s[i]=='0'&&len!=1){
				continue;
			}
			cout<<s[i];
		}
	}else{
		for(int i=len-1;i>=0;i--){
			if(isz){
				if(s[i]!='0')isz=false;
			}
			if(isz){
				continue;
			}
			if(i==len-1&&s[i]=='0'&&len!=1){
				continue;
			}
			cout<<s[i];
		}
	}
	return 0;
}
