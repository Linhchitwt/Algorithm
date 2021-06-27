// sắp xếp nổi bọt
// so sánh 2 số liên tiếp, nếu bên phải bé hơn thì đổi chổ cho số bên trái
// đẩy từ cuối danh sách lên
#include <iostream>
#include <algorithm>
#define max 100
using namespace std;
void sort(int array[], int n) {
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j + 1] < array[j]) {
                swap(array[j], array[j + 1]);
            }
        }
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