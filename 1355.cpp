#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
	int n,t;
	int k[15];
	while(scanf("%d",&n)!=EOF && n){
		memset(k,0,sizeof(k));
		bool flag=true;
		int b,e;
		b=15;e=-1;
		for(int i=0;i<n;i++){
			scanf("%d",&t);
			k[t]++;
			if(t && t<b) b=t;
			if(t && t>e) e=t;
			if(t && k[t]>1) flag=false;
		}
		if (e-b+1<=n && flag) printf("So Lucky!\n");
		else printf("Oh My God!\n");
	}
	return 0;
}