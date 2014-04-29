#include <iostream>
#include <cstdio>
using namespace std;

struct list{
	list *next;
	int val;
	list(int x):val(x),next(NULL){};
};

int main(void){
	int n,m,tmp;
	while(scanf("%d %d",&n,&m)!=EOF){
		
		if(n==0 && m==0) {cout<<"NULL"<<endl;continue;}
		
		list *h1=new list(-1);
		list *p1=h1;
		for(int i=0;i<n;i++){
				scanf("%d",&tmp);
				p1->next=new list(tmp);
				p1=p1->next;
		}
		
		list *h2=new list(-1);
		list *p2=h2;
		for(int i=0;i<m;i++){
				scanf("%d",&tmp);
				p2->next=new list(tmp);
				p2=p2->next;
		}
		
		p1=h1->next;
		p2=h2->next;
		list *h=new list(-1);
		list *p=h;
		while(p1 && p2){
			if(p1->val<p2->val){
				p->next=p1;
				p1=p1->next;
				p=p->next;
			}else{
				p->next=p2;
				p2=p2->next;
				p=p->next;
			}
		}
		
		if(p1) p->next=p1;
		if(p2) p->next=p2;
			
		p=h->next;
		while(p->next) {cout<<p->val<<' ';p=p->next;}
		cout<<p->val<<endl;		
	}

	return 0;
}