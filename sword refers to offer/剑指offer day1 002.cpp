#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
        vector <int> A,B;
        for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
        for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
        string c;
        int t=0;
        int i=0;
        for(;i<A.size()||i<B.size();i++) {
            if(i<A.size())  t+=A[i];
            if(i<B.size())  t+=B[i];
            c+=(t%2)+'0';
            t/=2;      
        } 
        if (t) c+=t+'0';
        
        reverse(c.begin(),c.end());
        
        return c;
    }
int main(){
	string a,b;
	cin>>a>>b;
	string c=addBinary(a,b);
	cout<<c<<endl;
}
