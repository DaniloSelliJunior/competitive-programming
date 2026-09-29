/*
C. Building Permutation
time limit per test
1 second
memory limit per test
256 megabytes

Permutation p is an ordered set of integers p1,  p2,  ...,  pn, consisting of n distinct positive integers, each of them doesn't exceed n. We'll denote the i-th element of permutation p as pi. We'll call number n the size or the length of permutation p1,  p2,  ...,  pn.

You have a sequence of integers a1, a2, ..., an. In one move, you are allowed to decrease or increase any number by one. Count the minimum number of moves, needed to build a permutation from this sequence.
Input

The first line contains integer n (1 ≤ n ≤ 3·105) — the size of the sought permutation. The second line contains n integers a1, a2, ..., an ( - 109 ≤ ai ≤ 109).
Output

Print a single number — the minimum number of moves.

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specifier.
*/

#include<iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    long long int n;
    long long int muv = 0;
 
    cin >> n;
    vector<int> v(n);
 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
 
    for(int i = 0; i < n; i++){
        long long int dif = abs(v[i] - (i + 1));
        muv += dif;
    }
 
    cout << muv << endl;
    return 0;
}