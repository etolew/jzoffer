#include<stdio.h>

int main(void){
	int n,t;
	while(scanf("%d",&n)!=EOF){
		
		for(int i=0;i<n;i++){
			scanf("%d",&t);
			int c=0;
			
			while(t!=0){
				t=t&(t-1);
				c++;
			}
			
			printf("%d\n",c);
			
		}
		
		
	}
	return 0;
}