#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
		
	
	int arr[100];
	int n;
	while(cin>>n){
	int r1=0;
	int r2=0;
	int tmp=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		tmp^=arr[i];
	}
	
	if(n!=2){
	int f=0;int c=-1;
	while(f!=1){
		f=tmp&0x01;
		tmp=tmp>>1;
		c++;
	}
	int mask=1<<c;
	
	for(int i=0;i<n;i++){
		if((arr[i] & mask)==0) r1^=arr[i];
		else r2^=arr[i];
	}
	
	
	}
	else {r1=arr[0];r2=arr[1];}
	
	if(r1<r2) cout<<r1<<' '<<r2<<' '<<endl;
	else cout<<r2<<' '<<r1<<' '<<endl;
	}
	return 0;
}