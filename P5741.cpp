#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int soc[3];
	int tot=0;
};
Student que[1005];

void sol(int o,int p){
	if(abs(que[o].tot-que[p].tot)<=10){
		for(int i=0;i<3;i++){
			if(abs(que[o].soc[i]-que[p].soc[i])>5){
				return;
			}
		}
		printf("%s %s\n",que[o].name.c_str(),que[p].name.c_str());
	}
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>que[i].name;
		for(int j=0;j<3;j++){
			cin>>que[i].soc[j];
			que[i].tot+=que[i].soc[j];
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			sol(i,j);
		}
	}
	
	
	return 0;
}
