#include<iostream>
#include<stack>
using namespace std;

int main(void){
	stack<int> s1,s2;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="POP"){
			if(s2.empty()){
				if(s1.empty()) {cout<<"-1"<<endl;continue;}
				else{
					while(!s1.empty()){
						s2.push(s1.top());
						s1.pop();
					}
				}
			}
			cout<<s2.top()<<endl;
			s2.pop();
		}
		else{
			int x;cin>>x;
			s1.push(x);			
		}
	}
	return 0;
}