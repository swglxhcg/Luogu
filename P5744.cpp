#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int age;
	int soc;
};

vector<Student> que;

void up(Student& s1){
//	printf("(%d->%lf)",s1.soc,s1.soc*1.2);
	s1.age++;
	s1.soc=int(s1.soc*1.2);
	if(s1.soc>600)s1.soc=600;
}

int main() {
	Student ts;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ts.name>>ts.age>>ts.soc;
		que.push_back(ts);
	}
	for(int i=0;i<int(que.size());i++){
		up(que[i]);
		printf("%s %d %d\n",que[i].name.c_str(),que[i].age,que[i].soc);
	}
	
	return 0;
}
