/*
A. Two Bags of Potatoes
time limit per test
0.5 seconds
memory limit per test
256 megabytes

Valera had two bags of potatoes, the first of these bags contains x (x≥1) potatoes, and the second — y (y≥1) potatoes. Valera — a very scattered boy, so the first bag of potatoes (it contains x potatoes) Valera lost. Valera remembers that the total amount of potatoes (x+y) in the two bags, firstly, was not greater than n, and, secondly, was divisible by k.

Help Valera to determine how many potatoes could be in the first bag. Print all such possible numbers in ascending order.
Input

The first line of input contains three integers y, k, n (1≤y,k,n≤109; nk ≤105).
Output

Print the list of whitespace-separated integers — all possible values of x in ascending order. You should print each possible value of x exactly once.

If there are no such values of x, print a single integer −1.
*/

#include<iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    long long int y, k, n;
 
    cin >> y >> k >> n;
    // 1 <= x <= n - y  &&  (x + y) % k = 0
 
    long long int p_mult = (y/k + 1)*k;
 
    if(p_mult > n){
        cout << -1 << endl;
        return 0;
    }
 
    for(int i = p_mult; i <= n; i += k)
        cout << i - y << " ";
            
    cout << endl;
    return 0;
}