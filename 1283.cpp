#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s;
	while(getline(cin,s)){
		int n=s.size();
		int c[26];
		for(int i=0;i<26;i++) c[i]=0;
		for(int i=0;i<n;i++){
			c[s[i]-'A']++;
		}
		int r=-1;
		for(int i=0;i<n;i++){
			if(c[s[i]-'A']==1) {r=i;break;}
		}
		
		cout<<r<<endl;
	}
	return 0;
}