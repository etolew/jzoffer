#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

struct list{
	list *next;
	int val;
	list(int x):val(x),next(NULL){};
};

int main(void){
	int n,tmp;
	while(scanf("%d",&n)!=EOF){
		stack<int> s;
		list *head=new list(-1);
		list *p=head;
		if(n==0) {cout<<"NULL"<<endl;continue;}
		for(int i=0;i<n;i++){
				scanf("%d",&tmp);
				list *nn=new list(tmp);
				p->next=nn;
				p=p->next;
		}
		p=head->next;
		while(p!=NULL) {s.push(p->val);p=p->next;}
		while(s.size()>1) {cout<<s.top()<<' ';s.pop();}
		cout<<s.top()<<endl;
		s.pop();
		delete head;
		delete p;
	}

	return 0;
}