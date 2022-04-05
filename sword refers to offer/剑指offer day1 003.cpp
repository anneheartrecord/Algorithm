#include <bits/stdc++.h>
using namespace std;
int lowbit(int x) {
	return x & -x;
}
vector <int> countBits(int n) {
	vector<int> a;
	a.push_back(0);
	for(int i=1;i<=n;i++) {
		int t=i;
		int result=0;
		while(t) {
			t-=lowbit(t);
			result++;
		}
		a.push_back(result);
	} 
	return a; 
}

int main(){
	int n;
	scanf("%d",&n);
	vector <int> c=countBits(n);
	for(int i=0;i<c.size();i++)
	printf("%d ",c[i]);
}
