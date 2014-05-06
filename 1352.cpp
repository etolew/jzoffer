#include <cstdio>
#include <cstring>
using namespace std;
 
int main(void){
    int n,k;
    int a[1000001];
while(scanf("%d %d",&n,&k)!=EOF){
     
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int b=0;int e=n-1;
    while(b<e){
        if(a[b]+a[e]>k) e--;
        else if(a[b]+a[e]<k) b++;
        else break;
    }
if(b<e)printf("%d %d\n",a[b],a[e]);
    else printf("-1 -1\n");
}
    return 0;
}