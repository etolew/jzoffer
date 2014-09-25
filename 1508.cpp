#include <iostream>
#include <cstring>
using namespace std;

bool isValid(char* s){
	
	if(s[0]=='\0') return false;
	int i=0;
	while(s[i]!='\0'){
		if(s[0]!='+' && s[0]!='-' && (s[0]-'0'<0 || s[0]-'0'>9)) return false;
		else if(i!=0 && (s[i]-'0'<0 || s[i]-'0'>9)) return false;
		else i++;
	}
	return true;	
}

int conStr(char* s){
	bool isPos=true;
	int i=0;
	if(s[0]=='-') {isPos=false;i++;}
	if(s[0]=='+') {isPos=true;i++;}
	int rt=0;
	while(s[i]!='\0'){
		rt=rt*10;
		rt=rt+(s[i]-'0');
		i++;
	}
	if(isPos) return rt;
	else return -rt;
}

int main(void){
	char* inStr=new char[100];
	while(cin>>inStr){
		if(isValid(inStr)) cout<<conStr(inStr)<<endl;
		else cout<<"My God"<<endl;
	}
	return 0;
}
