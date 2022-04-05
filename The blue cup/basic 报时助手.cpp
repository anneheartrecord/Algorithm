#include <bits/stdc++.h>
using namespace std;
string hourarray[25]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
"seventeen","eighteen","nineteen","twenty","twenty one","twenty two", "twenty three"};
string minutearray[61]={"zero","one","two","three","four","five","six","seven","eight","night","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
"seventeen","eighteen","nineteen","twenty","twenty one","twenty two", "twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"
,"thirty","thirty one","thirty two","thirty three","thirty four","thirty five","thirty six","thirty seven","thirty eight","thirty nine","forty",
"forty one","forty two","forty three","forty four","forty five","forty six","forty seven","forty eight","forty nine","fifty","fifty one",
"fifty two","fifty three","fifty four","fifty five","fifty six","fifty seven","fifty eight","fifty nine"};                      
int main(){
	int hour,minute;
	scanf("%d %d",&hour,&minute);
	if (minute==0) {
		cout<<hourarray[hour]+" "+"o'clock"<<endl;
	} else {
		cout<<hourarray[hour]+" "+minutearray[minute]<<endl;
	}
}
