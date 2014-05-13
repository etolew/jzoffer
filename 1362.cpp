#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void){
	
	int k;
	string in;
	string s;
	stringstream hehe;
	while(getline(cin,in)){
		hehe<<in;
		hehe>>s>>k;
		hehe.str("");
		int n=s.size();
		if(k>n) k=k%n;
		for(int i=0;i<k;i++){
			s=s+s[i];
		}
		cout<<s.substr(k,n)<<endl;	
	}
	return 0;
}