#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    int i = 3,sum = 0;
    while(i <= 300){
        sum = sum + i*i;
        i += 3;
    }
    printf("%d",sum);

    return 0;
}
