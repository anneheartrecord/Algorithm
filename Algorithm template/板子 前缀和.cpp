#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int s[N];
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
    s[i]=s[i-1]+a[i];
    while(n--){
        int l,r;
        scanf("%d %d",&l,&r);
       
        printf("%d\n",s[r]-s[l-1]);
    }
}
