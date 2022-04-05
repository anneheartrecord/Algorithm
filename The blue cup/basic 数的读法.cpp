#include <bits/stdc++.h>
using namespace std;
const int N=15;
string s1 [N]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
string s2 [N]={"shi","bai","qian","wan","yi"};
bool flag=false;
void get(int n) {
	
	int n1=n/1000;
	int n2=n/100%10;
	int n3=n/10%10;
	int n4=n%10;
	if (n==0){
		
	}
	else if(n2==0&&n3==0&&n4 ==0) {
	   cout<<s1[n1]+" "+s2[2];	
	}else if(n1==0&&n2==0&&n3==0){
		if(flag) {
			cout<<"ling ";
		}
		cout<<s1[n4];
	}else if(n1==0&&n2==0&&n3==1) {
		cout<<"shi "+s1[n4];
	}
	else if(flag&&n1==0&&n2==0||n2==0&&n3==0){
		if (n1!=0) {
			cout<<s1[n1]+" "+s2[2]+" ";
		}
		if(n2!=0){
			cout<<s1[n2]+" "+s2[1]+" ";
		}
		cout<<s1[0]+" ";
		if (n3!=0){
			cout<<s1[n3]+" "+s2[0]+" ";
		}
		cout<<s1[n4];
	}else if(!flag&&n1==0&&n2==0&&n3||n2==0&&n3==0){
		if (n1!=0) {
			cout<<s1[n1]+" "+s2[2]+" ";
		}
		if(n2!=0){
			cout<<s1[n2]+" "+s2[1]+" ";
		}
		
		if (n3!=0){
			cout<<s1[n3]+" "+s2[0]+" ";
		}
		cout<<s1[n4];
	}else if(n1==0&&n4==0) {
		cout<<s1[n2]+" "+s2[1]+" "+s1[n3]+" "+s2[0];
	}else if(n3==0&&n4==0){
		cout<<s1[n1]+" "+s2[2]+" "+s1[n2]+" "+s2[1];
	}else if(n4==0) {
		cout<<s1[n1]+" "+s2[2]+" "+s1[n2]+" "+s2[1]+" "+s1[n3]+" "+s2[0];
	} 
	 else {
		cout<<s1[n1]+" "+s2[2]+" "+s1[n2]+" "+s2[1]+" "+s1[n3]+" "+s2[0]+" "+s1[n4];
	}
	
	
}
int main() {
	int n;
	scanf("%d",&n); 
	if (n<10000) {
		get(n);
		cout<<endl;
	} else if(n<1e8) {
		
        int k1=n/1e4;
		get(k1);
		cout<< " wan ";
		flag=true;
		int k2=n%10000;
		get(k2);
		cout<<endl;	   
	} else {
		int k1=n/100000000;
		get(k1);
		cout<<" yi ";
		int k2=n%100000000/10000;
		get(k2);
		cout<<" wan ";
		int k3=n%10000;
		get(k3);
		cout<<endl;
	}
}
