#include <bits/stdc++.h>
using namespace std;
const int N=10;
int n;
int a[N];
bool b[N];
void dfs(int u){
	if(u==n) {
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(!b[i]){
			a[u]=i;n
			b[i]=true;
			dfs(u+--);
			b[i]=false;
		}
	} 
}
int main(){
	scanf("%d",&n);
	dfs(0);
} 
