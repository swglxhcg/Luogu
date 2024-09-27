#include<bits/stdc++.h>
using namespace std;

int n;
string evline;
int curcot=0;
int a,b,c,ts=0;
char lkf;

int main() {
	cin>>n;
	while(n){
		ts=0;
		//fflush(stdin);
		//getline(cin,evline);
		cin>>evline;
		
		if(evline[0]>='a'&&evline[0]<='c'){
			cin>>a>>b;
			switch (evline[0]) {
			case 'a':
				//TODO
				curcot=1;
				break;
			case 'b':
				//TODO
				curcot=2;
				break;
			case 'c':
				//TODO
				curcot=3;
				break;
			}
			//evline=evline.substr(1);
			//evline.erase(0,1);
		}else{
			a=atoi(evline.c_str());
			cin>>b;
		}
		//sscanf(evline.c_str(),"%d %d",&a,&b);
		switch (curcot) {
		case 1:
			//TODO
			c=a+b;
			lkf='+';
			break;
		case 2:
			//TODO
			c=a-b;
			lkf='-';
			break;
		case 3:
			c=a*b;
			lkf='*';
			break;
		}
		
		
		cout<<a<<lkf<<b<<'='<<c<<endl;
		
		if(a==0)ts++;
		if(b==0)ts++;
		while(a){
			a/=10;
			ts++;
		}
		while(b){
			b/=10;
			ts++;
		}
		if(c<=0)ts++;
		while(c){
			c/=10;
			ts++;
		}
		
		
		cout<<ts+2<<endl;
		
		n--;
	}
	
	return 0;
}
