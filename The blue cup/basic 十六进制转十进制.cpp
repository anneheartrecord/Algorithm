#include <bits/stdc++.h>
using namespace std;
string get(char s) {
	switch (s) {
		case '0':
		return "0000";
		case '1':
		return "0001";
		case '2':
		return "0010";
		case '3':
		return "0011";
		case '4':
		return "0100";
		case '5':
		return "0101";
		case '6':
		return "0110";
		case '7':
		return "0111";
		case '8':
		return "1000";
		case '9':
		return "1001";
		case 'A':
		return "1010";
		case 'B':
		return "1011";
		case 'C':
		return "1100";
		case 'D':
		return "1101";
		case 'E':
		return "1110";
		case 'F':
		return "1111";	
	}
	return "";
}
int main(){
	string s1;
	string s2;
	cin>>s1;
	int len=s1.length();


	for (int i=0;i<len;i++)  {
		s2+=get(s1[i]);
	}	
	
	int len2=s2.length();
	long long int x=1;
	long long  int tmp=0;
	for (int i=len2-1;i>-1;i--) {
	
		tmp+=x*(s2[i]-'0');
		x*=2;
	}
	
	
	printf("%lld\n",tmp);

}
