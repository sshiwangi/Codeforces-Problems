/* Greg is a beginner bodybuilder. Today the gym coach gave him the training plan. All it had was n integers a1, a2, ..., an. These numbers mean that Greg needs to do exactly n exercises today. Besides, Greg should repeat the i-th in order exercise ai times.

Greg now only does three types of exercises: "chest" exercises, "biceps" exercises and "back" exercises. Besides, his training is cyclic, that is, the first exercise he does is a "chest" one, the second one is "biceps", the third one is "back", the fourth one is "chest", the fifth one is "biceps", and so on to the n-th exercise.

Now Greg wonders, which muscle will get the most exercise during his training. We know that the exercise Greg repeats the maximum number of times, trains the corresponding muscle the most. Help Greg, determine which muscle will get the most training.

Input
The first line contains integer n (1 ≤ n ≤ 20). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 25) — the number of times Greg repeats the exercises.

Output
Print word "chest" (without the quotes), if the chest gets the most exercise, "biceps" (without the quotes), if the biceps gets the most exercise and print "back" (without the quotes) if the back gets the most exercise.

It is guaranteed that the input is such that the answer to the problem is unambiguous.

Examples
input
2
2 8
output
biceps

input
3
5 1 10
output
back

input
7
3 3 2 7 9 6 8
output
chest

Note
In the first sample Greg does 2 chest, 8 biceps and zero back exercises, so the biceps gets the most exercises.

In the second sample Greg does 5 chest, 1 biceps and 10 back exercises, so the back gets the most exercises.

In the third sample Greg does 18 chest, 12 biceps and 8 back exercises, so the chest gets the most exercise.*/

#include<iostream>
using namespace std;

int main(){
    int n,t,a(0),b(0),c(0);
    cin >> n;

    // int a[n];
    // for(int i = 1; i<n; i++){
    //     cin>>a[i];
    // }
    // int chest,bicep,back=0;
    for(int i = 1; i<=n; i++){
        cin>>t;
        if(i%3==1){
            a+=t;
        }
        else if(i%3==2){
            b+=t;
        }
        else {
            c+=t;
        }

    }
    if (a > b and a > c)
        cout << "chest" << endl;
    else if (b > a and b > c)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}
