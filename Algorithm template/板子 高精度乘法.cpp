#include<bits/stdc++.h>
#pragma GCC optimize (2)
using namespace std;
vector <int> mul(vector<int> A,int b){
	vector<int> C;
	int t=0;
	for(int i=0;i<A.size();i++) {
		t+=A[i]*b;
		C.push_back(t%10);
		t/=10;
	} 
	while (t) {
		C.push_back(t%10);
		t/=10;
	}
	while(C.size()>1&&C.back()==0)  C.pop_back();
	return C;
}
int main(){
	string a;
	cin>>a;
	int b;
	scanf("%d",&b);
	vector <int> A;
	for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
	vector<int> C;
	C=mul(A,b);
	for(int i=C.size()-1;i>=0;i--)  printf("%d",C[i]);
	return 0;
}
