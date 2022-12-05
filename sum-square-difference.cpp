#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int indvsq = 0;
  for (int i = 0; i<101; ++i){
    indvsq+=pow(i,2);
  }
  int sumsq = 0;
  for (int i = 0; i<101; ++i){
    sumsq +=i;
  }
  sumsq = pow(sumsq,2);
  cout<<sumsq- indvsq<<endl;
}