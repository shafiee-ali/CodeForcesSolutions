// A. Watermelon - 4
// Problem: https://codeforces.com/problemset/problem/4/A
// Author: Ali Shafiee


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "NO";
        return 0;
    }
    if(n % 2 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
