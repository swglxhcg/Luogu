#include<bits/stdc++.h>
using namespace std;


int main() {
	int i=1;
	string c2s;
	char i2c[100000];
	int js[2]={0};
	int sum=0;
	for(;i<=100000000;i++){
		//cout<<i<<endl;
		sprintf(i2c,"%d",i);
		c2s=i2c;
		//cout<<"[]"<<c2s.length()<<endl;
		if(c2s.length()%2==1){
			i*=10;
			i-=1;
			continue;
		}
		int len=0;
		len=c2s.length();
		memset(js,0,sizeof(js));
		for(int j=0;j<len;j++){
			if(j<len/2){
				js[0]+=(c2s[j]-'0');
			}else{
				js[1]+=(c2s[j]-'0');
			}
		}
		if(js[0]==js[1]){
			sum++;
			//cout<<i<<endl;
		}
		
	}
	cout<<sum;
	return 0;
}
