#include <bits/stdc++.h>
using namespace std;
string strhour;
string strminute;
void gethour(int hour) {
	switch (hour) {
	case 0 :
		strhour="zero";
	}
}
int main(){
	int hour,minute;
	gethour(0);
	cout<<strhour;
	
} 
