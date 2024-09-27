#include<bits/stdc++.h>
using namespace std;

vector<int> que;

int main() {
	int n,m;
	cin>>n>>m;
	int s;
	for(int i=0;i<m;i++){
		cin>>s;
		que.push_back(s);
	}
	sort(que.begin(),que.end());
	for(vector<int>::iterator ite=que.begin();ite!=que.end();ite++){
		cout<<(*ite)<<' ';
	}
	return 0;
}
