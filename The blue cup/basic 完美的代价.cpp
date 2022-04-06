#include <bits/stdc++.h>
using namespace std;
const int N=8005;
int main(){
	int n;
	scanf("%d",&n);
	char c[N];
	for(int i=0;i<n;i++)
	scanf("%c",&c[i]);
	int a[N];
	for(int i=0;i<n;i++)
	a[c[i]]++;
	if(n%2==0) {
		for(int i=0;i<n;i++) {
			if(a[c[i]]%2!=0) {
				printf("Impossible\n");
				return 0;
			}
		} 
	}  else {
		int cnt=0;
		for(int i=0;i<n;i++) {
			if(a[c[i]]%2!=0) {
				cnt++;
			} 
			if (cnt>=2) {
				printf("Impossible\n");
				return 0;
			}
		} 
	}
	printf("ok\n");
}
