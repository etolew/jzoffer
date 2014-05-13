#include <iostream>
using namespace std;

class ListNode{
public:
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

int main(void){
	int m,n;
	while(cin>>m>>n){
	cin>>m>>n;
		int i,tmpVal;
		ListNode *d1=new ListNode(-1);
		ListNode *p=d1;
		for(i=0;i<m;i++){
			cin>>tmpVal;
			p->next=new ListNode(tmpVal);
			p=p->next;
		}
		ListNode *d2=new ListNode(-1);
		p=d2;
		for(i=0;i<n;i++){
			cin>>tmpVal;
			p->next=new ListNode(tmpVal);
			p=p->next;
		}
		ListNode *p1=d1->next;
		ListNode *p2=d2->next;
		if(m>=n){
			for(i=0;i<m-n;i++) p1=p1->next;
		}else{
			for(i=0;i<n-m;i++) p2=p2->next;
		}
		bool flag=false;
		while(p1 && p2){
			if(p1->val==p2->val){
				cout<<p1->val<<endl;
				flag=true;
				break;
			}
			p1=p1->next;
			p2=p2->next;
		}
		if(!flag) cout<<"My God\n";
	}
	return 0;
}