// B. PowersOfTwo - 702
// Problem: https://codeforces.com/contest/702/problem/B
// Author: Ali Shafiee

#include <iostream>
#include<math.h>
#include <map>
#define ll long long int

using namespace std;

int main() {
    ll n;
    ll x = 1;
    ll maxNumber = 2*1000000000;
    ll powersOfTwo[32];
    map<int, int> numsCount;
    for(int i=0;i<32;i++) {
        powersOfTwo[i] = 1<<i;
    }
    cin >> n;
    ll nums[n];
    for (ll i = 0; i < n; ++i) {
        cin >> nums[i];
        numsCount[nums[i]]++;
    }
    ll counter = 0;
    ll k;
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<32;j++) {
            k = powersOfTwo[j] - nums[i];
            counter += numsCount[k];
            if(k == nums[i]) {
                counter--;
            }
        }
    }
    cout << counter/2;
}

