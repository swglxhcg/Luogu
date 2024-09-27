#include<bits/stdc++.h>
using namespace std;


int main() {
	int mm[13],curm=0,tolm2m=0,cmsave=0,svg=0;
	memset(mm,sizeof(mm),0);
	for(int i=1;i<13;i++){
		cin>>mm[i];
		curm+=300;
		if(curm>=mm[i]){
			cmsave=curm-mm[i];
			svg=cmsave/100;
			tolm2m+=svg*100;
			curm-=svg*100;
			curm-=mm[i];
			//printf("[%d M]Save %d yuan.Allin %d yuan.End %d yuan.\n",i,svg*100,tolm2m,curm);
		}else{
			cout<<-i<<endl;
			return 0;
		}
	}
	cout<<tolm2m*1.2+curm<<endl;
	
	
	return 0;
}
