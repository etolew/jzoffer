#include <cstdio>

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF && n!=0){
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int left=0;
	int right=n-1;
	int mid=(n-1)/2;
	int ret;
	if(a[left]==a[right] && a[left]==a[mid]){
		ret=a[0];
		for(int i=0;i<n;i++){
			if(a[i]<ret) ret=a[i];
		}
	}
	else if(a[left]<a[right]) ret=a[left];
	else{
		while(left+1<right){
			mid=(left+right)/2;
			if(a[left]<=a[mid]) left=mid;
			else if(a[mid]<=a[right]) right=mid;
		}
		ret=(a[left]>a[right])?a[right]:a[left];
	}
	printf("%d\n",ret);
		
	}
	return 0;
}