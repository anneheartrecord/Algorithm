#include <bits/stdc++.h>
using namespace std;
int compareStr(string s1,string s2) {
	if (s1.length()!=s2.length()) {
    return 1;
    }
    if (s1==s2) {
	return 2;
	}
	for(int i=0;i<s1.length();i++){
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
	}
	if (s1==s2) {
	return 3;}
	return 4;
}
int main(){
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
   printf("%d\n",compareStr(s1,s2));
}
