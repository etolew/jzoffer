#include <cstdio>
using namespace std;

int main(void)
{
	int t;
	scanf("%d",&t);
	int p=1;
	for(int i=1;i<=t;i++) {p*=10;}
	for(int i=1;i<p;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}