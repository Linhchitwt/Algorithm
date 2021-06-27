// sắp xếp chèn
// Mỗi lần số nhỏ hơn lại đẩy ra trước
#include <iostream>
#define max 100
using namespace std;
void sort(int array[], int n) {
    int k;
    for (int i = 1; i < n; i++) {
        for (int j = i-1; j >= 0; j--){
            if (array[i] < array[j]){
                k = array[i];
                array[i]= array[j];
                array[j] =k;
                int t;
                t = i;
                i = j;
                j = t;
            }
        }
    }
}
int main() {
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
