#include <bits/stdc++.h>
using namespace std;
const int N=25;
char a[N][N];
int n,m;
int ans=0;
void dfs1(int x,int y){
	if(x<n&&x>-1&&y<m&&y>-1&&a[x][y]=='@'){
		a[x][y]='.';
	} else {
		return ;
	}
	dfs1(x-1,y);
	dfs1(x+1,y);
	dfs1(x,y-1);
	dfs1(x,y+1);
}
void dfs2(int x,int y){
	if(x<n&&x>-1&&y<m&&y>-1&&a[x][y]=='#'){
		a[x][y]='.';
	} else {
		return ;
	}
	dfs2(x-1,y);
	dfs2(x+1,y);
	dfs2(x,y-1);
	dfs2(x,y+1);
}
void dfs3(int x,int y){
	if(x<n&&x>-1&&y<m&&y>-1&&a[x][y]=='*'){
		a[x][y]='.';
	} else {
		return ;
	}
	dfs3(x-1,y);
	dfs3(x+1,y);
	dfs3(x,y-1);
	dfs3(x,y+1);
}
int main(){
	scanf("%d %d",&n,&m);
	while(!(n==0&&m==0)){
		for(int i=0;i<n;i++)
		scanf("%s",a[i]);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='@'){
					dfs1(i,j);
					ans++;
				}
				if(a[i][j]=='#'){
					dfs2(i,j);
					ans++;
				}
				if(a[i][j]=='*'){
					dfs3(i,j);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
		ans=0;
		scanf("%d %d",&n,&m);
	}
}
