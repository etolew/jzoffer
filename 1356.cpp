#include <cstdio>

int main(void){
	int n,m;
	while(scanf("%d",&n)!=EOF && n){
		scanf("%d",&m);
		int r=0;
		for(int i=2;i<=n;i++) r=(r+m)%i;
		printf("%d\n",r+1);
	} 
	return 0;
}