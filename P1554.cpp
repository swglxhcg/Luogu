#include<bits/stdc++.h>
using namespace std;

int* getnumc(int num){
	int* rlt=new int[10];
	//cout<<sizeof(rlt);
	memset(rlt,0,40);
	if(num==0){
		rlt[0]=1;
		return rlt;
	}
	while(num!=0){
		//cout<<num<<' '<<num%10<<endl;
		
		rlt[num%10]++;
		num/=10;
		
		/*for(int i=0;i<10;i++){
			cout<<rlt[i]<<' ';
		}
		cout<<endl<<endl;*/
	}
	return rlt;
}

int main() {
	int a=0,b=0,c[10]={0};
	//memset(c,0,sizeof(c));
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		int* p=getnumc(i);
		for(int j=0;j<10;j++){
			c[j]+=p[j];
		}
	}
	for(int j=0;j<10;j++){
		cout<<c[j]<<' ';
	}
	return 0;
}
