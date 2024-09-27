#include<bits/stdc++.h>
using namespace std;

string s;
string numssc[20]={"one","two","three","four","five","six",
	"seven","eight","nine","ten","eleven","twelve","thirteen",
	"fourteen","fifteen","sixteen","seventeen","eighteen",
	"nineteen","twenty"};

int cnt;
int nums[6];




int main() {
	
	for(int i=0;i<=5;i++){
		cin>>s;
		if(i==5)s.pop_back();
		for(int i=0;i<20;i++){
			if(s==numssc[i]){
				nums[cnt++]=i+1;
			}
			if(s=="a"||s=="another"||s=="first"){
				nums[cnt++]=1;
			}else if(s=="both"||s=="second")nums[cnt++]=2;
			else if(s=="third")nums[cnt++]=3;
		}
	}
	for(int i=0;i<cnt;i++){
		nums[i]=(nums[i]*nums[i])%100;
	}
	
	
	return 0;
}
