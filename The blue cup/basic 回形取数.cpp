#include <bits/stdc++.h>
using namespace std;
const int N=205;
int a[N][N];
int n,m;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	int cnt=0;
	int i=0;
	int j=0;
	printf("%d ",a[0][0]);
	a[0][0]=0;
	while(cnt<n*m-1) {
		while(a[i+1][j])  {printf("%d ",a[++i][j]);a[i][j]=0;cnt++;}
		
		while(a[i][j+1])  {printf("%d ",a[i][++j]);	a[i][j]=0;cnt++;}
		
		while(i-1>=0&&a[i-1][j])  {printf("%d ",a[--i][j]);	a[i][j]=0;cnt++;}
	
		while(j-1>=0&&a[i][j-1])  {printf("%d ",a[i][--j]);a[i][j]=0;++cnt;}
		
	}
	return 0;
}
