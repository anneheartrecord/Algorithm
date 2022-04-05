#include <bits/stdc++.h>
using namespace std;
const int N=30;
int a[1000][1000];
int get(int n) {
	a[0][0]=1;
	a[1][0]=1;
	a[1][1]=1;
	int cnt=0;
	for (int i=2;i<1000;i++) {
	   for (int j=0;j<i;j++) {
	       if (j==0||j==i-1) {
		   	a[i][j]=1; 	
			}else {
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}	 
		   } 
	   }
   
	for (int i=0;i<980;i++) {
		for(int j=0;j<i;j++) {
			printf("%d ",a[i][j]);
			cnt++;
			if (a[i][j]==n) {
				return cnt;
			}
			
		}
		printf("\n");
	}   
	return 0;
} 
int main(){
	int n; 
    scanf("%d",&n);
    int t=get(n);
    printf("\n");
	printf("%d",t);
}
