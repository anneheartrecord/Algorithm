#include<bits/stdc++.h>
using namespace std;
void resolve(int i){
	printf("%d=",i);
	for(int j=2;j<i+1;j++){
		if (i%j==0){
			printf("%d",j);
			i=i/j;
			if(i!=1)
			printf("*");
			j=1;
		}
		if (i==1) {
			return ;
		}
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for (int i=a;i<b+1;i++){
		resolve(i);
		printf("\n");
	}
	return 0;
}
