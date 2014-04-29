#include<iostream>
#include<stack>
using namespace std;

int main(void){
	int n,q;
	
	while(cin>>n){
		bool flag=true;
		stack<int> tmp;
		int si[n],so[n];
		for(int i=0;i<n;i++) {cin>>si[i];}
		for(int i=0;i<n;i++) {cin>>so[i];}
		int i=0;int j=0;
		while(i!=n){
			q=so[i];
			while((tmp.empty()||tmp.top()!=q)&&(j!=n)){
				tmp.push(si[j]);
				j++;
			}
			if(tmp.top()!=q) {flag=false;break;}
			tmp.pop();
			i++;
		}
		while(!tmp.empty()) tmp.pop();
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}