#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int hour=0,minute=0,second=0;
	if (t>=3600) {
		hour=t/3600;
		t=t%3600;
	}
	if (t>=60) {
		minute=t/60;
		t=t%60;
	}
	second=t;
	printf("%d:%d:%d",hour,minute,second);
}
