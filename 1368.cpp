#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct tn{
	int left;
	int right;
	int val;
	tn(int x):val(x),left(-1),right(-1){};
};

void findValue(tn** tree,int idx,int k,vector<vector<int> > &rt,vector<int> r){
	if(idx==-1) return;
	r.push_back(idx);
	if(tree[idx]->left==-1 && tree[idx]->right==-1){
		if(tree[idx]->val==k){
			rt.push_back(r);
			return;
		}
	}
	findValue(tree,tree[idx]->left,k-(tree[idx]->val),rt,r);
	findValue(tree,tree[idx]->right,k-(tree[idx]->val),rt,r);
}

int main(void){
	int n,k;
	while(cin>>n>>k){
	tn* bt[n+1];
	cout<<"result:\n";
	if(n==0) continue;
	for(int i=1;i<=n;i++){
		int t,i1,i2;
		cin>>t>>i1>>i2;
		bt[i]=new tn(t);
		bt[i]->left=i1;
		bt[i]->right=i2;
	}
	vector<vector<int> > rt;
	vector<int> r;
	findValue(bt,1,k,rt,r);
	sort(rt.begin(),rt.end());
	for(int j=0;j<rt.size();j++){
		cout<<"A path is found:";
		for(int i=0;i<rt[j].size();i++) cout<<" "<<rt[j][i];
		cout<<"\n";
	}
	rt.clear();
	}
}