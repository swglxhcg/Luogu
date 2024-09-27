#include<bits/stdc++.h>
using namespace std;

int n;
string docs;
int opn,a,b;
string subtxt;

int main() {
	cin>>n;
	cin>>docs;
	while(n--){
		cin>>opn;
		switch (opn) {
		case 1:
			cin>>subtxt;
			docs+=subtxt;
			cout<<docs<<endl;
			break;
		case 2:
			cin>>a>>b;
			docs=docs.substr(a,b);
			cout<<docs<<endl;
			break;
		case 3:
			cin>>a>>subtxt;
			//docs.append(subtxt,a);
			docs.insert(a,subtxt);
			cout<<docs<<endl;
			break;
		case 4:
			cin>>subtxt;
			size_t l=docs.find(subtxt);
			if(l<docs.size()){
				cout<<l<<endl;
				break;
			}
			cout<<-1<<endl;
			break;
			
		}
	}
	
	return 0;
}
