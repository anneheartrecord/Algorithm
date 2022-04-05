#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int a[N];
//int mymax(int a,int b){
//	if(a>b) {
//		return a;
//	}
//	return b;
//}
//int main(){    三重循环 太慢了 
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	int max=0;
//	for(int i=0;i<n-2;i++) {
//		for (int j=i+1;j<n-1;j++){
//			for(int k=j+1;k<n;k++) {
//				if (a[i]+a[j]>a[k]) {
//					max=mymax(max,a[i]+a[j]+a[k]);
//				}
//			}
//		}
//	}
//	printf("%d\n",max);
//}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int max=0;
	sort(a,a+n);
	for(int i=n-1;i>=2;i--) {
		if(a[i-1]+a[i-2]>a[i]) {
			max=a[i-1]+a[i-2]+a[i];
			break;
		}
	}
	printf("%d\n",max);
}
