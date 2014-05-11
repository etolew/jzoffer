#include <iostream>
#include <cmath>
using namespace std;

int findUgly(int n){
	int *p=new int[n];
	int *p2=p;
	int *p3=p;
	int *p5=p;
	p[0]=1;
	if(n==1) return 1;
	for(int i=1;i<n;i++){
		p[i]=min(min(*p2*2,*p3*3),*p5*5);
		while(*p2*2<=p[i]) p2++;
		while(*p3*3<=p[i]) p3++;
		while(*p5*5<=p[i]) p5++;
	}
	return p[n-1];
}

int main(void){
	int n;
	while(cin>>n){
		cout<<findUgly(n)<<endl;
	}
	return 0;
}