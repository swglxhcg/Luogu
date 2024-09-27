#include<bits/stdc++.h>
using namespace std;

int zmb[26];
bool prime[100]={1,1,0,0};

bool isPer(int num){
	for(int i=2;i<=num;i++){
		for(int j=2;i*j<=num;j++){
			if(!prime[i]){
				prime[i*j]=1;
			}else{
				break;
			}
		}
	}
	if(!prime[num])return true;
	else return false;
}

int main() {
	//isPer(11);
	memset(zmb,0,sizeof(zmb));
	string s;
	cin>>s;
	for(auto ch : s){
		zmb[ch-'a']++;
	}
	int maxn=-999,minn=999;
	
	for(int i=0;i<26;i++){
		if(maxn<zmb[i]&&zmb[i]!=0)
			maxn=zmb[i];
		if(minn>zmb[i]&&zmb[i]!=0)
			minn=zmb[i];
	}
	int rlt=maxn-minn;
	if(isPer(rlt)){
		cout<<"Lucky Word"<<endl;
	}else{
		cout<<"No Answer"<<endl;
		rlt=0;
	}
	cout<<rlt;
	return 0;
}
