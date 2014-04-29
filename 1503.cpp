#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct tn{
	int val;
	tn *left;
	tn *right;
	tn(int x):val(x),left(NULL),right(NULL){};
};

tn* buildTree(int *a,int p,int m){
	if(a[p]==0 || p>=m) return NULL;
	tn *root=new tn(a[p]);
	int i=p+1;
	while(i<m && a[i]<a[p]) i++;
	root->left=buildTree(a,p+1,i);
	root->right=buildTree(a,i,m);
	return root;
}

void inOrder(tn *root,vector<tn*> &t){
	if(root==NULL) return;
	inOrder(root->left,t);
	t.push_back(root);
	inOrder(root->right,t);
}

int main(void){
	int n;int a[1000];tn *t[1000];
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		stringstream s;
		string ss;
		
		getline(cin,ss);
		s<<ss;
		int m=0;
		while(s>>a[m]) m++;
		if(a[0]==0) continue;
		tn* root=buildTree(a,0,m);
		vector<tn*> t;
		inOrder(root,t);
		for(int j=0;j<t.size();j++){
			t[j]->left=NULL;
			t[j]->right=NULL;
		}
		for(int j=0;j<t.size();j++){
			if(j!=0) t[j]->left=t[j-1];
			if(j!=t.size()-1) t[j]->right=t[j+1];
		}
		root=t[0];
		while(root) {cout<<root->val<<' ';root=root->right;}
		cout<<endl;
		t.clear();
	}
	return 0;
}