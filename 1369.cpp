#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void){
	char s[10];
	while(gets(s)){
		int l=strlen(s);
		sort(s,s+l);
		puts(s);
		while(next_permutation(s,s+l)) puts(s);
	} 
	return 0;
}