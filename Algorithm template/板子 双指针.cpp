#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int s[N];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int ans=0;
	for(int i=0,j=0;i<n;i++) {
		s[a[i]]++;
		while(s[a[i]]>1) {
			s[a[j]]--;
			j++;
		}
		ans=max(ans,i-j+1);
	}
	printf("%d\n",ans);
}
