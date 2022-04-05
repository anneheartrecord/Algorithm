#include <bits/stdc++.h>
using namespace std;
const int N=25;
char a[N][N];
int n,m;
int ans=0;
void dfs(int x,int y) {
	if(x<m&&x>-1&&y<n&&y>-1&&a[x][y]=='.'){
		a[x][y]='#';
		ans++;
	} else {
		return;
	}
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	
}
int main(){
	int p;
	int q;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	scanf("%s",a[i]);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) {
			if (a[i][j]=='@') {
				p=i;
				q=j;
				a[i][j]='.';
			}
			
		}
	}
	dfs(p,q);
	printf("%d\n",ans);
}
