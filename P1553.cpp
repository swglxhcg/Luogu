#include<bits/stdc++.h>
using namespace std;

string s;
int getCate(string str){
	int k=0;
	if(str.find('.')!=str.npos)k=1;
	if(str.find('/')!=str.npos)k=2;
	if(str.find('%')!=str.npos)k=3;
	return k;
}

string prtNumS(string numsrt,bool isXs){
	string rltsrt; 
	bool isFirstZero=true;
	for(int i=numsrt.length()-1;i>=0;i--){
		if(isFirstZero){
			if(numsrt[i]!='0')isFirstZero=false;
		}
		if(!isFirstZero){
			//cout<<numsrt[i];
			//rltsrt.append(numsrt[i]);
			rltsrt.push_back(numsrt[i]);
		}
	}
	if(isFirstZero)rltsrt.push_back('0');
	else if(isXs){
		for(int i=rltsrt.length()-1;i>0;i--){
			if(rltsrt[i]=='0'){
				rltsrt[i]='\0';
			}else{
				break;
			}
			
		}
	}
	return rltsrt;
	
}

int main() {
	//prtNumS("6000");
	int cutPos=0;
	cin>>s;
	switch (getCate(s)) {
	case 1:
		cutPos=s.find('.');
		cout<<prtNumS(s.substr(0,cutPos),0);
		cout<<'.';
		cout<<prtNumS(s.substr(cutPos+1,s.length()-1),1);
		break;
	case 2:
		cutPos=s.find('/');
		cout<<prtNumS(s.substr(0,cutPos),0);
		cout<<'/';
		cout<<prtNumS(s.substr(cutPos+1,s.length()-1),0);
		break;
	case 3:
		cutPos=s.find('%');
		cout<<prtNumS(s.substr(0,cutPos),0);
		cout<<'%';
		break;
	default:
		cout<<prtNumS(s,0);
		break;
	}
	
	return 0;
}
