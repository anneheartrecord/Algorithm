#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][n];
	int c[n][n];
	    int b[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	int result[n][n];
    if (m==0) {
    	for (int i=0;i<n;i++) {
    		for (int j=0;j<n;j++)
    		result [i][j]=0;
		}
    	for (int i=0;i<n;i++) {
    		result[i][i]=1;
		}
	} 
	else if(m==1) {
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++)  {
				result[i][j]=a[i][j];
		
			}
			
		}
	} 
	else {
		m=m-1;
	    for (int i=0;i<n;i++){
	    	for (int j=0;j<n;j++)
	    	{
	    	b[i][j]=a[i][j];
	    	c[i][j]=0;
			}
	    	
		}
		while(m--) {
			for (int i=0;i<n;i++){
				for (int j=0;j<n;j++) {
					for (int k=0;k<n;k++){
						c[i][j]+=a[i][k]*b[k][j];        
					}
				}
			}
			for (int i=0;i<n;i++) {
				for (int j=0;j<n;j++){
					a[i][j]=c[i][j];
					c[i][j]=0;
				}
			}
		}
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++)
		    result[i][j]=a[i][j];
		}
	}	
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",result[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
