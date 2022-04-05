#include <bits/stdc++.h>
using namespace std;
const int N=10;
int n;
char m[N][N];
bool col[N],row[N],dg[N],udg[N];
void dfs(int x,int y,int cnt){
			if(y==n) y=0,x++;
			if(x==n) {
				if(cnt==n) {
					for(int i=0;i<n;i++) {
						printf("%s\n",m[i]);
				}
				printf("\n");
				}
				return ;
			}
			dfs(x,y+1,cnt);
			if(!col[x]&&!row[y]&&!dg[x+y]&&!udg[x-y+n]){
			m[x][y]='Q';
			col[x]=row[y]=dg[x+y]=udg[x-y+n]=true;
			dfs(x,y+1,cnt+1);
			col[x]=row[y]=dg[x+y]=udg[x-y+n]=false;
			m[x][y]='.';
		}	
}
int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		m[i][j]='.';
	}
	dfs(0,0,0);
	return 0;
}
