#include <bits/stdc++.h>
using namespace std;
const int N=205;
bool cmp(int x,int y) {
   return x>y;
}
int main(){
	int a[N];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
	   scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	for ( int i=0;i<n;i++) {
	   printf("%d ",a[i]);
	}
	return 0;
} 
