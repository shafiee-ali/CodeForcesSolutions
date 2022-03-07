// A. Maximum Increase - 702
// Problem: https://codeforces.com/contest/702/problem/A
// Author: Ali Shafiee

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int maxLength = 1, currLength = 1;
    for (int i = 1; i < n; ++i) {
        if(nums[i] > nums[i-1]) {
            currLength++;
        }
        else {
            if(currLength > maxLength) {
                maxLength = currLength;
            }
            currLength = 1;
        }
    }
    if(currLength > maxLength) {
        maxLength = currLength;
    }
    cout << maxLength;
}

