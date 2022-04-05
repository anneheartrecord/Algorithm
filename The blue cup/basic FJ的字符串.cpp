#include <bits/stdc++.h>
using namespace std;
const int N=30;
char m [N]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
int main(){
   int n;
   scanf("%d",&n);
   string s [N];
   s[0]=m[0];
   	 for(int i=1,j=1;i<n;i++,j++){
   	 s[j]=s[j-1]+m[i]+s[j-1];
   }
   cout<<s[n-1]<<endl;
   
   return 0;
}
