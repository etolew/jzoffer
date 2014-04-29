#include<iostream>
using namespace std;

bool isValid(int p[],int size){
	if(p==NULL || size<=0) return false;
	int root=p[size-1];
	int i=0;
	while(p[i]<root) i++;
	for(int j=i;j<size-1;j++){
		if(p[j]<root) {return false;}
	}
	bool fl=true;
	bool fr=true;
	if(i>0) fl=isValid(p,i);
	if(i!=size-1) fr=isValid(p+i,size-1-i);
	return (fl && fr);	
}

int main(void){
	int n;
	while(cin>>n){
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		bool flag=isValid(a,n);
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}