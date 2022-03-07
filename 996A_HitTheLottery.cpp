// A. Hit the Lottery - 996
// Problem: https://codeforces.com/problemset/problem/996/A
// Author: Ali Shafiee

n = int(input())
counter = 0
counter += n // 100
n -= n // 100 * 100
if n > 0:
    counter += n // 20
    n -= n // 20 * 20
if n > 0:
    counter += n // 10
    n -= n // 10 * 10
if n > 0:
    counter += n // 5
    n -= n // 5 * 5
counter += n
print(counter)
