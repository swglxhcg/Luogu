#include<bits/stdc++.h>
using namespace std;

string txt;
int rltb=0,rltg=0;
int  fdbog(string st){
	int fdrlt;
	while(txt.find(st)!=txt.npos){
		size_t ps=txt.find(st);
		for(size_t i=0;i<st.size();i++){
			txt[i+ps]='-';
			
		}
		fdrlt++;
		//cout<<txt<<endl;
	}
	return fdrlt;
}

int main() {
	
	

	//VVK
	cin>>txt;
	string tb("boy");
	string tg("girl");
//	
//	rltb+=fdbog(tb);
//	rltg+=fdbog(tg);
	
	for(size_t i=0;i<txt.size()-2;i++){
		rltb+=(txt[i]=='b'||txt[i+1]=='o'||txt[i+2]=='y');
	}
	for(size_t i=0;i<txt.size()-3;i++){
		rltg+=(txt[i]=='g'||txt[i+1]=='i'||txt[i+2]=='r'||txt[i+3]=='l');
	}
	cout<<rltb<<endl<<rltg<<endl;
	
	return 0;
}
