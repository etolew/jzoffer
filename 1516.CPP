#include<iostream>
#include<vector>
using namespace std;

int main(void){
	int n;
	while(cin>>n){
		int a[n];
		vector<int> even,odd;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			if((a[i] % 2)==0) even.push_back(a[i]);
			else odd.push_back(a[i]);
		}
		if(!odd.empty()){ 
			for(int i=0;i<odd.size()-1;i++) cout<<odd[i]<<' ';
			if(even.empty()) cout<<odd[odd.size()-1]<<endl;
			else cout<<odd[odd.size()-1]<<' ';
		}
		if(!even.empty()){
			for(int i=0;i<even.size()-1;i++) cout<<even[i]<<' ';
			cout<<even[even.size()-1]<<endl;
		}
		even.clear();odd.clear();
	}
	return 0;
}