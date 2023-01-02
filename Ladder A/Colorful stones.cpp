/* There is a sequence of colorful stones. The color of each stone is one of red, green, or blue. You are given a string s. The i-th (1-based) character of s represents the color of the i-th stone. If the character is "R", "G", or "B", the color of the corresponding stone is red, green, or blue, respectively.

Initially Squirrel Liss is standing on the first stone. You perform instructions one or more times.

Each instruction is one of the three types: "RED", "GREEN", or "BLUE". After an instruction c, if Liss is standing on a stone whose colors is c, Liss will move one stone forward, else she will not move.

You are given a string t. The number of instructions is equal to the length of t, and the i-th character of t represents the i-th instruction.

Calculate the final position of Liss (the number of the stone she is going to stand on in the end) after performing all the instructions, and print its 1-based position. It is guaranteed that Liss don't move out of the sequence.

Input
The input contains two lines. The first line contains the string s (1 ≤ |s| ≤ 50). The second line contains the string t (1 ≤ |t| ≤ 50). The characters of each string will be one of "R", "G", or "B". It is guaranteed that Liss don't move out of the sequence.

Output
Print the final 1-based position of Liss in a single line.

Examples
input
RGB
RRR
output
2

input
RRRBGBRBBB
BBBRR
output

3
input
BRRBGBRGRBGRGRRGGBGBGBRGBRGRGGGRBRRRBRBBBGRRRGGBBB
BBRBGGRGRGBBBRBGRBRBBBBRBRRRBGBBGBBRRBBGGRBRRBRGRB
output
15 */

//code
#include<iostream>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    int i = 0; // index of string t
    int j = 0; // index of string s
    int n = t.size();
    while(n--){
        if(t[i] == s[j]){
            j++;
        }
        i++;
    }
    cout<<j+1<<endl;
    return 0;
}
