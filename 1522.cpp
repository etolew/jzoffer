#include<iostream>
#include<stack>
using namespace std;

void mypush(stack<int> &s,stack<int> &a,int t){
	s.push(t);
	if(a.empty() || a.top()>=t) a.push(t);
}

void mypop(stack<int> &s,stack<int> &a){
	if(s.empty()) return;
	if(!a.empty() && (a.top()==s.top())) a.pop();
	s.pop();	
}

void myclear(stack<int> &s,stack<int> &a){
	if(!s.empty()) s.pop();
	if(!a.empty()) a.pop();
}


int main(void){
	int n,t;
	char ci;
	while(cin>>n){
		
		stack<int> s,a;
		
		for(int i=0;i<n;i++) {
			cin>>ci;
			if(ci=='s') {
				cin>>t;
				mypush(s,a,t);
				if(!a.empty()) cout<<a.top();
				else cout<<"NULL";
				cout<<endl;
			}
			if(ci=='o') {
				mypop(s,a);
				if(!a.empty()) cout<<a.top();
				else cout<<"NULL";
				cout<<endl;
			}
		}
		myclear(s,a);		
	}
	return 0;
}