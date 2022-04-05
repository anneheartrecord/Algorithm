#include <bits/stdc++.h>
using namespace std;
const int N=105;
char c[N][N];
int n,m;
void dfs(int x,int y){
	c[x][y]='.';
	for(int dx=-1;dx<=1;dx++) {
		for(int dy=-1;dy<=y+1;dy++){
			int nx=x+dx;
			int ny=y+dy;
			if(nx>=0&&nx<n&&ny>=0&&ny<m&&c[nx][ny]=='W'){
				dfs(nx,ny);
			}
		}
	}
}
int main(){

	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		scanf("%c",&c[i][j]);
	}
	int ans=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(c[i][j]=='W') {
				dfs(i,j);
				ans++;
			}
		}
	}
	printf("%d\n",ans);
} 
