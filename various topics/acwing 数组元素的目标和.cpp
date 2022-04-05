#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],b[N];

int main(){
    int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	for(int i=0,j=m-1;i<n;i++) {
		while(j>=0&&a[i]+b[j]>q) j--;
		if(a[i]+b[j]==q) printf("%d %d\n",i,j);
	}	
	return 0;
} 
