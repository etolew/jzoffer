#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF){
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	nth_element(a,a+k,a+n);
	sort(a,a+k);
	for(int i=0;i<k-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[k-1]);
	}
	return 0;
}