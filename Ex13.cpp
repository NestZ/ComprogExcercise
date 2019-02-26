#include<iostream>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
  T temp = d[x];
  d[x] = d[y];
  d[y] = temp;
}

template <typename T>
void selectionSort(T d[],int N){
  int min;
  for(int i = 0;i < N-1;i++){
    min = i;
    for(int j = i+1;j < N;j++){
      if(d[j] < d[min])min = j;
    }
    swap(d,i,min);
  }
}

int main(){
 int arr[10] = {15,62,54,23,17,41,32,19,17,10};

 selectionSort(arr,10);

 for(int i = 0;i < 10;i++){
   cout << arr[i] << " ";
 }

 return 0;
}
