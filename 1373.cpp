#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

int ct(const char* a){
	if(!*a) return 0;
	int length=strlen(a);
	int first=*a-'0';
	if(length==1){
		if(first==0) return 0;
		else return 1;
	}	
	int c1=0,c2=0,c3=0;
	
	if(first==1) c1=atoi(a+1)+1;
	else if(first>1) c1=pow(10,length-1);
	
	c2=first*(length-1)*pow(10,length-2);
	
	c3=ct(a+1);
	
	return c1+c2+c3;	
	
}

int ret(int i){
	char a[20];
	sprintf(a,"%d",i);
	if(i<=0) return 0;
	else return ct(a);
}

int main(void)
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a<=b) printf("%d\n",ret(b)-ret(a-1));
		else printf("%d\n",ret(a)-ret(b-1));
	}
	return 0;
}