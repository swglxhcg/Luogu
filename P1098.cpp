#include<bits/stdc++.h>
#include<algorithm>
#define NLL unsigned long long
using namespace std;

vector<string> subQue;
int cinp[3];

bool isSameStrClass(char a,char b){
	if(isdigit(a)&&isdigit(b))return true;
	if(isalpha(a)&&isalpha(b))return true;
	return false;
}

string genSubText(int p1,int p2,int p3,char a,char b){
	string rlt;
	for(int i=1;a+i<b;i++){
		for(int j=0;j<p2;j++){
			char c=a+i;
			if(p1==1) c=tolower(c);
			else if(p1==2) c=toupper(c);
			else if(p1==3) c='*';
			rlt.push_back(c);
		}
	}
	if(p3==2)reverse(rlt.begin(),rlt.end());
	return rlt;
}

//sbit=0;=='s-9'
void getSub(string& s1,NLL sbit){
	if(sbit+2<s1.length()){
		if(isSameStrClass(s1[sbit],s1[sbit+2])){
			if(s1[sbit]<s1[sbit+2]){
				if(s1[sbit]==s1[sbit+2]-1){
					subQue.push_back("");
					s1[sbit+1]='#';
				}else{
					subQue.push_back(genSubText(cinp[0],cinp[1],cinp[2],s1[sbit],s1[sbit+2]));
					s1[sbit+1]='#';
				}
			}
		}
	}
}

void handle(string s1){
	int thcs=0;
	for(NLL i=0;i<s1.length();i++){
		if(s1[i]=='-'){
			getSub(s1,i-1);
		}
	}
	for(NLL i=0;i<s1.length();i++){
		if(s1[i]=='#'){
			//TEST-0000
			if(subQue.size())cout<<subQue[thcs];
			thcs++;
//			if(i+1<s1.length()&&s1[i+1]=='#') i+=1;
		}else{
			cout<<s1[i];
		}
	}
}

int main() {
	string s;
	cin>>cinp[0]>>cinp[1]>>cinp[2];
	cin>>s;
	handle(s);
	
	return 0;
}
