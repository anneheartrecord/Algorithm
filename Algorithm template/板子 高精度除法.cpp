#include <bits/stdc++.h>
#pragma GCC optimize (2)
using namespace std;
vector <int> div(vector<int> A,int b,int &c) {
	vector<int> C;
	for(int i=A.size()-1;i>=0;i--) {
		c=c*10+A[i];
		C.push_back(c/b);
		c%=b;
	}
	reverse(C.begin(),C.end());
	while(C.size()>1&&C.back()==0) C.pop_back();
	return C;
	
}
int main(){
	string a;
	int b,c;
	cin>>a;
	scanf("%d",&b);
	vector <int> A;
	for(int i=a.size()-1;i>=0;i--)  A.push_back(a[i]-'0');
	vector<int> C;
	C=div(A,b,c);
	for(int i=C.size()-1;i>=0;i--) printf("%d",C[i]);
	printf("\n");
	printf("%d",c);
} 
