#include <iostream>
#include <vector>
using namespace std;

struct Node{
	Node *left;
	Node *right;
	int val;
	Node(int x):val(x),left(NULL),right(NULL){};
};

Node *buildTree(vector<int> &pre,vector<int> &in,int ps,int pe,int is,int ie,int &ct){
	if(ie<is || pe-ps!=ie-is) return NULL;
	Node *root=new Node(pre[ps]);
	int cur=-1;
	for(int i=is;i<=ie;i++){
		if(in[i]==pre[ps]) {cur=i;break;}
	}
	if(cur!=-1){
		ct++;//节点存在才能加
		root->left=buildTree(pre,in,ps+1,ps+cur-is,is,cur-1,ct);
		root->right=buildTree(pre,in,ps+cur-is+1,pe,cur+1,ie,ct);
	}
	return root;
}

void postOrder(Node *root,vector<int> &post){
	if(root!=NULL){
	postOrder(root->left,post);
	postOrder(root->right,post);
	post.push_back(root->val);
	}
}

int main(void){
	int n,tmp;
	vector<int> pre,in,post;
	while(cin>>n){
		for(int i=0;i<n;i++) {cin>>tmp;pre.push_back(tmp);} 
		for(int i=0;i<n;i++) {cin>>tmp;in.push_back(tmp);} 
		int ct=0;
		Node *root=buildTree(pre,in,0,n-1,0,n-1,ct);
		if(ct!=n) cout<<"No"<<endl;
		else {postOrder(root,post);
		for(int i=0;i<n;i++) {cout<<post[i]<<' ';}
		cout<<endl;
		post.clear();
		}
		in.clear();
		pre.clear();
	}
	return 0;
}
