#include <bits/stdc++.h>
using namespace std;
double max(double x1,double x2) {
	if(x1>x2) {
		return x1;
	}
	return x2; 
}
double min(double x1,double x2) {
	if (x1<x2) {
		return x1 ;
	}
	return x2 ;
}
int main() {
	double a1[4];
	double a2[4];  //a1 横坐标 a2纵坐标 
    for (int i=0;i<4;i++){
    	scanf("%lf %lf",&a1[i],&a2[i]);
	}
	double x1,y1,x2,y2,x3,y3,x4,y4;
	x1=min(a1[0],a1[1]);
	y1=min(a2[0],a2[1]);
	x2=max(a1[0],a1[1]);
	y2=max(a2[0],a2[1]);
	x3=min(a1[2],a1[3]);
	y3=min(a1[2],a1[3]);
	x4=max(a1[2],a1[3]);
	y4=max(a1[2],a1[3]);
	double result=0.00;
	//满足 左下 在对方右上的左下 
    
	if(x1<x4&&y1<y4&&x3<x2&&y3<y2) {	
	  sort(a1,a1+4);
	  sort(a2,a2+4);
	  result=(a1[2]-a1[1])*(a2[2]-a2[1]);
	} 
	printf("%.2lf",result);
	return 0;
} 
