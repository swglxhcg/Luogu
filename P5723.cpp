#include<bits/stdc++.h>
using namespace std;

bool pri[100005];

int main() {
	
	int tot=0,sum=0;
	for(int i=0;i<=100005;i++){
		pri[i]=0;
	}
	int l;
	cin>>l;
	if(l<2){
		cout<<0<<endl;
		return 0;
	}
	if(l==2){
		cout<<2<<endl<<1<<endl;
		return 0;
	}
	for(int i=2;i<=l;i++){
		if(!pri[i])
		for(int j=i*2;j<=l;j+=i){
			pri[j]=1;
		}
	}
	int i;
	for(i=2;i<=l;i++){
		if(sum<l){
			if(!pri[i]){
				if(sum+i<=l)sum+=i;
				else break;
				cout<<i<<endl;
				tot++;
			}
		}else{
			
			break;
		}
		
	}
	//cout<<"SUM: "<<sum<<endl;
	cout<<tot<<endl;
	
	return 0;
}
