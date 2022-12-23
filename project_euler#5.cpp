#include <bits/stdc++.h>
using namespace std;

long long lcm(vector<long long> nums){
    long long multiple = 1;
    for(int i = 0; i<nums.size(); ++i){
        multiple = (multiple*nums[i])/(__gcd(nums[i],multiple));
    }
    return multiple;
}

int main(){
    vector <long long> nums = {};
    for(long long i = 1; i < 21; ++i){
        nums.push_back(i);
    }
    cout<<lcm(nums)<<endl;
}