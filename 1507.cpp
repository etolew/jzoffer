#include <cstdio>

int main(void){
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		int sum;
		int c=1;
		int a=n;
		int b=m;
		while(c){
			sum=a ^ b;
			c=(a & b)<<1;
			a=sum;
			b=c;
		}
		printf("%d\n",sum);
	}
	return 0;
}