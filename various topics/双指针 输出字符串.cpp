#include <bits/stdc++.h>
using namespace std;
int main(){
	char str[1000];
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		int j=i;
		while(str[j]!=' '&&j<n) j++;
		for(int k=i;k<j;k++) printf("%c",str[k]);
		printf("\n");
		i=j; 
	} 
	return 0;
}
