#include <bits/stdc++.h>
using namespace std;


int factors(int index){
    int tri_num = (index)*(index+1)/2;
    int total = 0;
    for(int i = 1; i <= sqrt(tri_num); ++i){
        if (tri_num%i == 0){
            total+=1;
            if(i<sqrt(tri_num)){
                total+=1;
            }
        }
    }
    return total;
}



int main(){
    int index = 10;
    while(factors(index)<500){
        index+=1;
    }
    cout<<index<<endl;
    cout<<(index)*(index+1)/2<<endl;
}