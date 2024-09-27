#include<bits/stdc++.h>
using namespace std;

class BigInt{
public:
	const int totbits=3005;
	vector<int> nums;
	int ite=0;
	BigInt(string s){
		nums.resize(totbits);
		int i=s.size()-1;
		while(i>=0){
			if(s[i]>='0'&&s[i]<='9'){
				nums[ite++]=s[i]-'0';
			}
			i--;
		}
	}
	BigInt(){
		nums.resize(totbits);
	}
	BigInt operator + (BigInt& b) const{
		int totsize=ite>b.ite?ite:b.ite;
		BigInt rlt; 
		for(int i=0;i<=totsize;i++){
			rlt.nums[i]+=(nums[i]+b.nums[i]);
			if(rlt.nums[i]>9){
				rlt.nums[i+1]+=1;
				rlt.nums[i]=rlt.nums[i]%10;
			}
		}
		if(rlt.nums[totsize]==0){
			rlt.ite=totsize-1;
		}else{
			rlt.ite=totsize;
		}
		return rlt;
	}
	BigInt operator * (BigInt& b){
		BigInt rlt;
		for(int i=0;i<b.ite;i++){
			for(int j=0;j<ite;j++){
				rlt.nums[j+i]+=b.nums[i]*nums[j];
				if(rlt.nums[i+j]>9){
					rlt.nums[i+j+1]+=rlt.nums[i+j]/10;
					rlt.nums[i+j]=rlt.nums[i+j]%10;
				}
				if(rlt.nums[i+j+1]!=0)rlt.ite=i+j+1;
				else if(rlt.nums[i+j+1]==0&&(rlt.nums[i+j]!=0))rlt.ite=i+j;
			}
		}
		return rlt;
	}
};

int main() {
	string sa,sb;
	cin>>sa>>sb;
	BigInt ba(sa),bb(sb);
	BigInt c=ba*bb;
	for(int i=c.ite;i>=0;i--){
		cout<<c.nums[i];
	}
	return 0;
}
