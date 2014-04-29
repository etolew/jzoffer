#include <iostream>
using namespace std;

struct list{
	int val;
	list *next;
	int rad;
	list(int x):val(x),next(NULL),rad(0){};
};

int main(void){
	int n;
	while(cin>>n){
	if(n==0) continue;
	int h;cin>>h;
	list *head=new list(h); 
	list *p=head;
	list *c;
		for(int i=1;i<n;i++){
			cin>>h;
			p->next=new list(h);
			p=p->next;
		}
	p=head;
		for(int i=0;i<n;i++){
			cin>>h;
			p->rad=h;
			p=p->next;
		}
	p=head;
		for(int i=0;i<n;i++){
			cout<<p->val<<' ';
		if(p->rad){
			c=head;for(int j=1;j<p->rad;j++) c=c->next;
			cout<<c->val<<endl;
		}else cout<<0<<endl;
			p=p->next;
		}
	}
	return 0;
}

