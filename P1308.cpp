#include<bits/stdc++.h>
using namespace std;

string txt,rtx;
int ct=0,ps,ft=-1;


int main() {
	getline(cin,rtx);//cin>>rtx;
	getline(cin,txt);
	for(size_t i=0;i<rtx.size();i++){
		if(rtx[i]>='A'&&rtx[i]<='Z'){
			rtx[i]-='A';
			rtx[i]+='a';
		}
	}
	for(size_t i=0;i<txt.size();i++){
		if(txt[i]>='A'&&txt[i]<='Z'){
			txt[i]-='A';
			txt[i]+='a';
		}
	}
	if(txt.find(rtx)==txt.npos){
		cout<<-1<<endl;
	}else{
		while(txt.find(rtx)!=txt.npos){
			ps=txt.find(rtx);
			
			//txt.erase(ps,rtx.size());
			for(size_t i=0;i<rtx.size();i++){
				txt[ps+i]='-';
			}
			//cout<<ps<<' '<<ps+rtx.size()<<endl;
			//cout<<txt<<endl;
			if(ps-1<0){
				if(ps+rtx.size()==txt.length())ct++;
				else if(txt[ps+rtx.size()]==' ')ct++;
			}else{
				if(txt[ps-1]==' '){
					if(ps+rtx.size()==txt.length()){
						ct++;
					}else if(txt[ps+rtx.size()]==' '){
						ct++;
					}
				}
				//if(ps==(int)txt.length())ct++;
			}
			if(ft==-1&&ct!=0)ft=ps;
			//cout<<txt<<endl;
		}
		if(!ct){
			cout<<-1<<endl;
			return 0;
		}
		cout<<ct<<' '<<ft<<endl;
		
	}
	
	return 0;
}
