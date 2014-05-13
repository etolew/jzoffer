#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF && n!=0){
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int max=-10000000;
	int l=0,r=0;
	int lr=0,rr=0;
	for(int i=0;i<n;i++){
		s=s+a[i];r=i;
		if(max<s) {max=s;lr=l;rr=r;}
		if(s<0)	{s=0;l=i+1;}
	}
	
	printf("%d %d %d\n",max,lr,rr);
		
	}
	return 0;
}