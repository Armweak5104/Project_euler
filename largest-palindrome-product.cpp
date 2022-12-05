#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int reverse(int inp){
  string rinp = "";
  string testinp = to_string(inp);
  for(int i = testinp.length() - 1; i >= 0; i--){
    rinp+=testinp[i];
  }
  return stoi(rinp);
}

int main(){
  int max = 0;
  for(int i = 999; i>100; i--){
    for(int j = 999; j>100; j--){
      if (i*j == reverse(i*j)){
        if (i*j>max){
          max = i*j;
        }
      }
    }
  }
  cout<<max<<endl;
}