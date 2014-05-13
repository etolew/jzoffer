#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main(void){
	
	string s;	
	while(getline(cin,s)){
		
		stack<string> ss;
		int n=s.size();
		string tmp;
		for(int i=0;i<n;i++){
			if(s[i]==' '){
				tmp=tmp+' ';
			}
			else {
				if(tmp!="" && tmp[0]==' ') {ss.push(tmp);tmp="";}
				tmp+=s[i];
				if(i==n-1 || (i<n-1 && s[i+1]==' ')){
					ss.push(tmp);
					tmp="";
				}
			}
		}
		if(tmp!="") ss.push(tmp);
		
		while(!ss.empty()){
			cout<<ss.top();
			ss.pop();
		}
		cout<<endl;
		
	}
	return 0;
}