#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
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
  long total = 0;
  for (int i = 0; i < 2*pow(10,6); ++i){
    if (is_prime(i)){
      total+=i;
    }
  }
  cout<<total<<endl;
}