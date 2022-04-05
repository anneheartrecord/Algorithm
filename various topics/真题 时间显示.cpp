#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
	ll time;
	scanf("%lld",&time);
	ll  t=(time/1000)%864000;
	int hour=(t/3600)%24;
	t=t%3600;
	int min=t/60;
	t=t%60;
	printf("%02d:%02d:%02d",hour,min,t);
}
