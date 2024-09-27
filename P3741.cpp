#include<bits/stdc++.h>
using namespace std;

string txt;

int main() {
	//VVK
	int n;
	cin>>n>>txt;
	int rlt=0;
	string tgt("VK");
	while(txt.find(tgt)!=txt.npos){
		size_t ps=txt.find(tgt);
		for(size_t i=0;i<tgt.size();i++){
			txt[i+ps]='-';
		}
		rlt++;
	}
	//cout<<txt<<endl;
	if(txt.find("VV")!=txt.npos||txt.find("KK")!=txt.npos)rlt++;
	cout<<rlt;
	
	return 0;
}
