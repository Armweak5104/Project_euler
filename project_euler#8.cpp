#include <bits/stdc++.h>
using namespace std;

long long int product(vector<int> nums){
    long long int total = 1;
    for(int i: nums){
        total*=i-'0';
    }
    return total;
}

int main(){
    ifstream data("inputpe.txt");
    string content;
    string digits =  "";
    long long int maxVal = 0;
    vector<int> temp = {};
    int i = 0;
    while(getline(data,content)){
        digits+=content;
    }
    for(int i = 0; i<digits.length()+1; ++i){
        temp.push_back(digits[i]);
        if(temp.size() == 13){
            cout<<i<<endl;
            maxVal = max(maxVal,product(temp));
            temp = {};
            i-=12;
        }
    }                                                         
    cout<<maxVal<<endl;
}