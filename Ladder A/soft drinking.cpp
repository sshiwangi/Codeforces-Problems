/* This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

Input
The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.

Output
Print a single integer — the number of toasts each friend can make.

Examples
input
3 4 5 10 8 100 3 1
output
2

input
5 100 10 1 19 90 4 3
output
3

input
10 1000 1000 25 23 1 50 1
output
0
Note
A comment to the first sample:

Overall the friends have 4 * 5 = 20 milliliters of the drink, it is enough to make 20 / 3 = 6 toasts. 
The limes are enough for 10 * 8 = 80 toasts and the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group, 
so the answer is min(6, 80, 100) / 3 = 2 */

//code
#include<iostream>
#include <algorithm>
using namespace std;

// k*l is enough to make k*l/nl tosts.
    // c*d slices are enough for c*d/1 tost.
    // p grams of salt is enough for p/np tost.
    // we will take minimum of them and if the minimum is less than the number of friends then it won't be able to satisfy them other wise the number
    // of tosts will be minimum of them divided by number of friends.

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalToasts;
    int sliceAndSalt = min(c*d, p/np); 
    totalToasts = min((k*l)/nl, sliceAndSalt);
    if(totalToasts<n)cout<<0<<endl;
    else cout<<totalToasts/n<<endl;
    return 0;
}
