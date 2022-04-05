#include <bits/stdc++.h>
using namespace std;
const int N=10005;
int a[N];
int max(int a,int b) {
	if (a>b) 
	return a ;
	
	return b ;
}
int min(int a,int b ){
	if (a<b)
	return a;
	return b;
}
int main() {
	int n;
	scanf("%d",&n);
	int max1=-10005,min1=10005,all=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		all+=a[i];
		max1=max(max1,a[i]);
		min1=min(min1,a[i]);
	}
	printf("%d\n",max1);
	printf("%d\n",min1);
	printf("%d\n",all);
}

