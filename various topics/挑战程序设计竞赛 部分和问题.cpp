#include <bits/stdc++.h>
using namespace std;
const int N=21;
int a[N];
int k;
int n;
bool dfs(int i,int sum); 
int main(){

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    scanf("%d",&k);
	if (dfs(0,0))  {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
}
bool dfs(int i,int sum) { 
	if (i==n)  return sum==k;
	if(dfs(i+1,sum)) return true;
	if(dfs(i+1,sum+a[i])) return true;
	return false;
}
