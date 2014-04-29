#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

struct tn{
	tn *left;
	tn *right;
	int val;
	tn(int x):val(x),left(NULL),right(NULL){};
};

void tp(tn *root,vector<int> &r){
	if(root==NULL) return;
	r.push_back(root->val);
	tp(root->right,r);
	tp(root->left,r);
}

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		
		if(n==0) {cout<<"NULL"<<endl;continue;}
		
		int tmp;
		vector<int> res;
		tn* tree[n];
		
		for(int i=0;i<n;i++){
			scanf("%d",&tmp);
			tree[i]=new tn(tmp);
		}
		
		char c;
		int i1,i2;
		for(int i=0;i<n;i++){
			cin>>c;
			if(c=='d'){
				scanf("%d %d",&i1,&i2);
				tree[i]->left=tree[i1-1];
				tree[i]->right=tree[i2-1];
			}
			if(c=='l'){
				scanf("%d",&i1);
				tree[i]->left=tree[i1-1];
			}
			if(c=='r'){
				scanf("%d",&i2);
				tree[i]->right=tree[i2-1];
			}
		}
		
		tp(tree[0],res);
		
		for(int i=0;i<res.size()-1;i++) cout<<res[i]<<' ';
		cout<<res[res.size()-1]<<endl;
		
		res.clear();	
		
	}

	return 0;
}