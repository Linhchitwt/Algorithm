// sắp xếp chọn
// chọn số bé nhất hoán đổi lần lượt cho các vị trí 0,1,2,...
#include <iostream>
#include <algorithm>
#define max 100
using namespace std;
void sort(int array[], int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (array[min] > array[j]) {
                min = j;
            }
        }
        swap(array[i], array[min]);
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
    sort(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}