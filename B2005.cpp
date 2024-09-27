#include<bits/stdc++.h>
using namespace std;

void s1(char c){
	printf("  %c\n %c%c%c\n%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c);
}

void s2(char c){
	for(int i=0;i<3;i++){
		int j=2-i;
		while(j){
			cout<<" ";
			j--;
		}
		j=1+2*i;
		while(j){
			cout<<c;
			j--;
		}
		cout<<endl;
	}
}

int main() {
	char c;
	cin>>c;
	s2(c);
	return 0;
}
