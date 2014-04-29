#include<iostream>
using namespace std;

struct list{
	list *next;
	int val;
	list(int x):val(x),next(NULL){};
};

int main(void){
	int n,k,t;
	while(cin>>n>>k){
		list *head=new list(-1);
		list *p=head;
		for(int i=0;i<n;i++){
			cin>>t;
			list *tmp=new list(t); 
			p->next=tmp;
			p=p->next;
		}
		if(k==0) {cout<<"NULL"<<endl;continue;}
		list *s,*f;
		s=head;f=head;
		int c=k;
		while(c--) {
			f=f->next;
			if(f==NULL) {c=k;break;}
		}
		if(c==k) {cout<<"NULL"<<endl;continue;}
		while(f!=NULL){
			s=s->next;
			f=f->next;
		}
		cout<<s->val<<endl;
		
	}
	return 0;
}