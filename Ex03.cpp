#include<stdio.h>
using namespace std;

int main(){
    int i = 10,sum = 0;
    while(i <= 50){
        sum = sum + i*i;
        i++;
    }
    printf("%d",sum);

    return 0;
}
