#include<bits/stdc++.h>
using namespace std;

int ct=0;

void dfs(int sum,int bit){
	if(bit<=30){
		if(sum==7){
			ct++;
			return;
		}
		
	}else{
		return;
	}
	dfs(sum+1,bit+1);
	dfs(sum,bit+1);
}

int main() {
	dfs(0,1);
	cout<<ct;
	return 0;
}
