/* Two players are playing a game. First each of them writes an integer from 1 to 6, and then a dice is thrown. The player whose written number got closer to the number on the dice wins. If both payers have the same difference, it's a draw.

The first player wrote number a, the second player wrote number b. How many ways to throw a dice are there, at which the first player wins, or there is a draw, or the second player wins?

Input
The single line contains two integers a and b (1 ≤ a, b ≤ 6) — the numbers written on the paper by the first and second player, correspondingly.

Output
Print three integers: the number of ways to throw the dice at which the first player wins, the game ends with a draw or the second player wins, correspondingly.

Examples
input
2 5
output
3 0 3

input
2 4
output
2 1 3

Note
The dice is a standard cube-shaped six-sided object with each side containing a number from 1 to 6, and where all numbers on all sides are distinct.

You can assume that number a is closer to number x than number b, if |a - x| < |b - x|. */

//code
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int player1wins = 0, player2wins = 0, draw = 0;
    for(int i = 1; i<=6; i++){
        if(abs(a-i)<abs(b-i))player1wins++;
        else if(abs(a-i)>abs(b-i))player2wins++;
        else draw++;
    }
    cout<<player1wins<<" "<<draw<<" "<<player2wins<<endl;
    return 0;
}
