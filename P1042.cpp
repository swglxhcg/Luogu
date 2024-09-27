#include<bits/stdc++.h>
using namespace std;

string s,ts;

void handleN(string& s1,int N=11){
	int win=0;
	int lose=0;
	for(int i=0;i<int(s1.length())&&s1[i]!='E';i++){
		if(i%N==0&&i/N!=0){
			printf("%d:%d\n",win,lose);
			win=0;
			lose=0;
		}
		if(s1[i]=='W'){
			win++;
		}else if(s1[i]=='L'){
			lose++;
		}
	}
	if(win+lose!=N)printf("%d:%d\n",win,lose);
}

int main() {
	while(cin>>ts){
		s+=ts;
		if(ts[ts.length()-1]=='E'){
			s.pop_back();
			break;
		}
	}
	handleN(s);
	cout<<endl;
	handleN(s,21);
	
	return 0;
}
