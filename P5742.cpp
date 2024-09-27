#include<bits/stdc++.h>
using namespace std;

class Student{
public:
	int number;
	int socSty;
	int socSz;
	int socAll;
	Student(int _n,int sst,int ssz){
		this->number=_n;
		this->socSty=sst;
		this->socSz=ssz;
		this->socAll=this->socSty*7+this->socSz*3;
	}
	Student(){
		
	}
	int getTotSoc(){
		return socSty+socSz;
	}
	void setAllSoc(){
		this->socAll=this->socSty*7+this->socSz*3;
	}
};

bool isExcellent(Student a){
//	printf("\n%5d%5d%5d",a.number,a.socSty,a.socSz);
	if(a.getTotSoc()>140&&a.socAll>=800){
		return true;
	}
	return false;
}

int main() {
	int n;
	vector<Student> vecStudent;
	cin>>n;
	for(int i=0;i<n;i++){
		int n,sst,ssz;
//		cin>>vecStudent[i].number>>vecStudent[i].socSty>>vecStudent[i].socSz;
		cin>>n>>sst>>ssz;
		Student a(n,sst,ssz);
		vecStudent.push_back(a);
	}
	for(int i=0;i<n;i++){
		cout<<(isExcellent(vecStudent[i])?"Excellent":"Not excellent")<<endl;
	}
	
	return 0;
}
