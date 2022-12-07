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
  vector <int> primes = {};
  int i = 1;
  while (primes.size()<10001){
    if (is_prime(i)){
      primes.push_back(i);
    }
    i+=1;
  }
  cout<<primes[primes.size()-1];
}