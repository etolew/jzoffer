#include <cstdio>
#include <algorithm>
using namespace std;
struct tn{
	int val;
	tn* left;
	tn* right;
	tn(int x):val(x),left(NULL),right(NULL){};
};

int  treeDepth(tn* root,int depth){
	if(root==NULL) return depth;
	int ld=treeDepth(root->left,depth+1);
	int rd=treeDepth(root->right,depth+1);
	return max(ld,rd);
}

int main(void){
	int n;
	scanf("%d",&n);
	tn* t[n];
	for(int i=0;i<n;i++) t[i]=new tn(1); 
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a!=-1) t[i]->left=t[a-1];
		if(b!=-1) t[i]->right=t[b-1];
	}
	int ret=1;
	ret=treeDepth(t[0],0);
	printf("%d\n",ret);
	return 0;
}