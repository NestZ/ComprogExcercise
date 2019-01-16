#include<iostream>
using namespace std;

int greatDiviser(int n){
    int i = n-1;

    while(n%i != 0){
        i--;
    }
    return i;
}

int main(){
    int x;

    cout << "Enter your number : ";
    cin >> x;

    cout << greatDiviser(13);

    return 0;
}
