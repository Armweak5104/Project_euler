#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> fib = {1,1};
  int i = 0;
  int total = 0;
  while (fib[fib.size()-1] <4000000){
    fib.push_back(fib[i]+fib[i+1]);
    i+=1;
  }
  for (int j = 0; j<fib.size(); ++j){
    if (fib[j]%2==0){
      total += fib[j];
    }
  }
  cout<<total<<endl;
}