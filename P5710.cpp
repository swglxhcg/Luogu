#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int isOnum(int num){
	if(num%2==0)return 1;
	return 0;
}
int isTwo(int num){
	if(num>4&&num<=12){
		return 1;
	}
	return 0;
	
}

int main(){
	int n;
	cin>>n;
	int o,t;
	o=isOnum(n);
	t=isTwo(n);
	int a=0,u=0,b=0,z=0;
	if(o||t){
		u=1;
		if(o&&t)a=1;
		if(!(o&&t))b=1;
	}else{
		z=1;
	}
	printf("%d %d %d %d",a,u,b,z);
	return 0;
}
