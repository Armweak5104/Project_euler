#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
  if (n == 2){
    return true;
  }else if(n==1){
    return false;
  }
  for(int i = 2;i<ceil(sqrt(n))+1;i++){
    if (n%i==0){
      return false;
    }
  }
  return true;
}
                   
int main(){
  long test = 600851475143;
  int max = 0;
  for (int i = 1; i<sqrt(test+1); ++i){
    if(is_prime(i) && test%i==0){
      cout<<i<<endl;
    }
  }
}