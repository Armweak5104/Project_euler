#include <bits/stdc++.h>
using namespace std;


bool check_pythagoras(int a,int b,int c){
  return a*a + b*b == c*c;
}

void special_pythagoras(int target, int final[]){
  int test = target;
    for(int i = 1; i<target/2;++i){
      for(int j = 1; j<(target/2)+1; ++j){
        int k = target - i - j;
        if(check_pythagoras(i,j,k)){
          final[0] = i;
          final[1] = j;
          final[2] = k;
        }
    }
  }
}

int main(){
    int target = 1000;
    int final[3] = {0,0,0};
    int total = 1;
    special_pythagoras(target,final);
    for(int i: final){
      total *= i;
    }
    cout<<total<<endl;

}