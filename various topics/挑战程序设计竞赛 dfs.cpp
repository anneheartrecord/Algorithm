#include <bits/stdc++.h>
using namespace std;
int n;
int m;
char a[100][100];
void dfs(int k,int v) {
	a[k][v]='.';
	int nx,ny;
	for(int i=-1;i<=1;i++) {
		for(int j=-1;j<=1;j++) {
			nx=k+i;
			ny=v+j;
			if(0<=nx&&nx<=n&&0<=ny&&ny<=m&&a[nx][ny]=='w') {
				dfs(nx,ny);
			}
		}
	}
	return ;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) {
			scanf("%s",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	int ans=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if (a[i][j]=='w') {
				dfs(i,j);
			    ans++;
			} 
		}
	}
	printf("%d\n",ans);
} 
