// Sắp xếp nhanh
#include <iostream>
#include <algorithm>
#define max 100
using namespace std;
int Quick_sort(int array[], int right, int left) {
    int Pivot = right;
    int index = left -1;
    for (int i = left; i < right ; i++){
        if (array[i] <= array[Pivot]){
            index++;
            swap(array[i], array[index]);
        }
    }
    swap(array[index +1],array[Pivot]);
    return index +1;
}
void Quick_(int array[], int right, int left){
    if (left < right){
    int Piv= Quick_sort(array,right,left);
        Quick_(array, Piv - 1 , left);
        Quick_(array,right, Piv +1);
    }
}
int main(){
     int array[max];
    int n;
    cout << "Number of element n = ";
      cin >> n;
      cout << "Input element :\n";
      for (int i = 0; i < n; i++) {
          cout << "Array[" << +i << "]" << " = ";
          cin >> array[i];}
    Quick_(array, n-1, 0);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}