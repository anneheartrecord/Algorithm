#include<bits/stdc++.h>
using namespace std;
int lowbit(int x) {
	return x & -x;
}
int main(){
	int n;
	scanf("%d",&n); 
	while(n--) {
		int x;
		int ans=0;
		scanf("%d",&x);
		while(x) {
			x-=lowbit(x);
			ans++;
		}
		printf("%d ",ans);
	}
	return 0;
}
