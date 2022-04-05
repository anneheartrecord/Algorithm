#include <bits/stdc++.h>
using namespace std;
string get(string a) {
	
		if (a== "0000")
			return "0";
		if (a== "0001")
		return "1";
		if (a=="0010") 
		return "2";
		if (a=="0011") 
		return "3";
	    if (a=="0100")
		return "4";
		if  (a=="0101")
		return "5";
		if (a== "0110")
		return "6";
		if (a== "0111")
		return "7";
		if (a== "1000")
		return "8";
		if (a== "1001")
		return "9";
		if (a== "1010")
		return "A";
		if (a== "1011")
		return "B";
		if (a== "1100")
		return "C";
		if (a== "1101")
		return "D";
		if (a== "1110")
		return "E";
		if (a== "1111")
		return "F";	
	}


int main(){
    long long int a;
	scanf("%lld",&a);
	if (a==0)  {
		cout<<"0";
	}
	string s;
	int tmp; 
	while(a!=0) {
	   	tmp=a%2;
		a=a/2;
		s+=tmp+'0';
	}	
	reverse(s.begin(),s.end());
	int len=s.length();
	if (len%4==1){
	   s="000"+s;
	} else if (len%4==2) {
	   s="00"+s;
	} else if (len%4==3) {
	   s="0"+s;
	}
  
	string s1;

	for (int i=0;i<len;i+=4) {
		string s2;
		s2=s2+s[i]+s[i+1]+s[i+2]+s[i+3];
		s1+=get(s2);
	}
	cout<<s1;
}
