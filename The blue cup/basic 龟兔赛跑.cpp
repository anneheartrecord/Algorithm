#include <bits/stdc++.h>
using namespace std;
int main(){
	int v1,v2,t,s,l;
	scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
	int t1=0;
	int t2=l/v2;
	for(int i=0,j=0;i<=l;) {
		i+=v1;
		t1+=1;
		if (i>=l) {
			break;
		}
		j+=v2;
		if(i-j>=t) {
			t1+=s;
			j+=s*v2;
		}
	}
	
	if(t1==t2)  {
		printf("D\n");
		printf("%d\n",t2);
	} else if(t1<t2) {
		printf("R\n");
		printf("%d\n",t1);
	} else {
		printf("T\n");
		printf("%d\n",t2);
	}
}
