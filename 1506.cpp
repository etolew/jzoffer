#include <iostream>
using namespace std;

class sumCalc{
	public:
	sumCalc(){
		sum+=++n;
	}
	static int getSum(){
		return sum;
	}
	void reset(){
		n=0;
		sum=0;
	}
	private:
		static int n;
		static int sum;
};

int sumCalc::n=0;
int sumCalc::sum=0;

int main(void){
	int i;
	while(cin>>i){
		sumCalc *t=new sumCalc[i];
		//静态成员函数无需实例即可调用
		cout<<sumCalc::getSum()<<endl;
		t[0].reset();
		delete t;
	}
	return 0;
}