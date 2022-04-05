#include <bits/stdc++.h> 
using namespace std;
int lowbit(int x) {
        return   x & -x;
    }    

    bool isP(int x) {
    	if (x==1)  return false; 
        
        for(int i=2;i*i<=x;i++) {
            if (x%i==0) return false; 
        }
        return true;
    }    
    int countPrimeSetBits(int left, int right) {
        int ans=0;
            for(int i=left;i<=right;i++)  {
            	int t=i;
                int temp=0; 
                while(t) {
                    t-=lowbit(t);
                    temp++;
                } 
                
                if (isP(temp)) {
                    ans++;
                }
            }
            return ans; 
    }

    
int main(){
	int x1,x2;
	scanf("%d %d",&x1,&x2);
	int result=countPrimeSetBits(x1,x2);
	printf("%d\n",result);
	
} 
