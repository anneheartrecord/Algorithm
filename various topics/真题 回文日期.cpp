#include <bits/stdc++.h>
using namespace std;
bool check1(int x) {
	int x1=x%10;
	int x2=x/10%10;
	int x3=x/100%10;
	int x4=x/1000%10;
	int x5=x/10000%10;
	int x6=x/100000%10;
	int x7=x/1000000%10;
	int x8=x/10000000;
	if(x1==x8&&x2==x7&&x3==x6&&x4==x5) {
		return true;
	} 
	return false; 
}
bool check2(int x) {
	int x1=x%10;
	int x2=x/10%10;
	int x3=x/100%10;
	int x4=x/1000%10;
	int x5=x/10000%10;
	int x6=x/100000%10;
	int x7=x/1000000%10;
	int x8=x/10000000;
	
	if(x1==x3&&x1==x6&&x1==x8&&x3==x6&&x3==x8&&x6==x8&&x2==x4&&x2==x5&&x2==x7&&x4==x5&&x4==x7&&x5==x7){
		return true;
	}
	return false; 
}
int main(){
	int n;
	scanf("%d",&n);
	int x1,x2=0;
	for(int i=n+1;i<1e8;i++){
		if (i/100%10==0&&i/1000%10==0) {
			continue;
		}
		if (i%100>31) {
			continue;
		} 
		if (i%10000>1231) {
			continue;
		}
		if (check1(i)) {
			x1=i;
			break; 
		}
	}
	for(int i=n+1;i<1e8;i++) {
		if (i/100%10==0&&i/1000%10==0) {
			continue;
		}
		if (i%100>31) {
			continue;
		} 
		if (i%10000>1231) {
			continue;
		}
		if (check2(i)) {
			x2=i;
			break;
		}
	}

	printf("%d\n",x1);
	printf("%d\n",x2);
	return 0;
} 
