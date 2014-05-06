#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
	int n,m,t;
	int s[1000001];
	
	while(scanf("%d",&n)!=EOF){
	memset(s,0,sizeof(s));
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		s[t]++;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		printf("%d\n",s[t]);
	}
	}
	return 0;
}