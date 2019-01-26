#include<iostream>
#include<string>

using namespace std;

int sumTwoDigits(int N){
	int i,a = 0,b = 0;
	if(N < 0 || N > 9999)return -1;
	else{
    a = N/1000;
    N -= 1000*a;
    N /= 10;
    b = N%10;

		return a+b;
	}
}

int main(){
	cout << sumTwoDigits(20000) << "\n";
	cout << sumTwoDigits(5) << "\n";
	cout << sumTwoDigits(5432) << "\n";
	cout << sumTwoDigits(-5) << "\n";
	cout << sumTwoDigits(9142) << "\n";
	cout << sumTwoDigits(109) << "\n";
	cout << sumTwoDigits(4781) << "\n";
	cout << sumTwoDigits(299) << "\n";
	cout << sumTwoDigits(8053) << "\n";
}
