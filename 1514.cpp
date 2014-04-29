#include <iostream>
#include <cstdio>
using namespace std;

void mypow(double &b,int &ex){
	double tmp=1.0;
	if(b-0.0>-0.00000001 && b-0.0<0.00000001){
		if(ex>0) printf("%.2ef\n",0.0);
		else printf("INF\n");
		
	}else{
		if(ex==0) printf("%.2ef\n",1.0);
		else if(ex>0){
			int i=0;
			while(i<ex){
				tmp*=b;
				i++;
			}
			printf("%.2ef\n",tmp);
		}else{
			int i=0;
			while(i>ex){
				tmp/=b;
				i--;
			}
			printf("%.2ef\n",tmp);
		}
	}

}


int main(void){
	int t;
	double b;
	int ex;
	cin>>t;
	
	for(int i=0;i<t;i++){
		cin>>b>>ex;
		mypow(b,ex);
	}

	return 0;
}