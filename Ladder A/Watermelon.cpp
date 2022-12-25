#include<iostream>
using namespace std;

int main(){
    int weight;
    cin>> weight;

    if(weight == 0 || weight == 2)cout<<"No"<<endl;

    else if(weight%2!=0)cout<< "No"<<endl; // if the watermelon weights odd number of kilos, it is not possible to divide it into two parts of even kilos
    else cout<< "Yes"<<endl;
    return 0;
}
