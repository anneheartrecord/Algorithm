#include <bits/stdc++.h>
#pragma GCC optimize (2)
using namespace  std;
vector <int> mul(int a,int b) {
	vector<int> C;
	int t;
	for(int i=a;i>b;i--) {
		t+=i*(i-1);
		printf("%d  ",t);
		C.push_back(t%10);
		t=t/10;
	}
	while (t) {
		C.push_back(t%10);
		t/=10;
	}
	while(C.size()>1&&C.back()==0)  C.pop_back();
	return C;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	vector <int> C=mul(a,b);
	for(int i=C.size()-1;i>=0;i--) 
	printf("%d",C[i]); 
}
