#include <cstdio>
#include <iostream>

int main(void){
  long long r[71];
  r[1]=1;r[2]=2;
  for(int i=3;i<=70;i++) r[i]=r[i-1]+r[i-2];
  int n;
  scanf("%d",&n);
  std::cout<<r[n];
  return 0;
}