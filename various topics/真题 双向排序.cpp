#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a [N];
bool  compare (int a,int b ){
	return a>b;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	while(m--) {
		int i,j;
		scanf("%d %d",&i,&j);
		if (i==1) {
			sort(a+j-1,a+n);   
			continue;
		}
		if (i==0) {
			sort(a,a+j,compare);   
			continue;
		}
		
			
	}
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
