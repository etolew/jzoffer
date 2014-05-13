#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int p=a[0];
	int ct=1;
	for(int i=1;i<n;i++){
		if(p!=a[i]) ct--;
		else ct++;
		if(ct==0) {
			p=a[i];
			ct=1;
		}
	}
	ct=0;
	for(int i=0;i<n;i++) {if(p==a[i]) ct++;}
	if(ct>n/2) printf("%d\n",p);
	else printf("-1\n");
	
	}
	return 0;
}