#include <iostream>
#define max 100
using namespace std;
int Binary(int left, int right, int arr[], int x){
    if ( right >= left ){
    int mid = (left + right)/2;
        if (arr[mid] == x ){
            return mid;
        }
        else if (arr[mid] < x){
            return Binary(left, mid-1,arr,x);
        }
        else if (arr[mid] > x) {
            return Binary(mid +1, right,arr,x);
        }
    }
    return -1;
}
int main(){
    int arr[max];
    int n;
    cout <<" n = ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout <<"arr["<<i<<"] = ";
        cin >> arr[i];
    }
    int x, index;
    cout<<"x = ";
    cin >> x;
    index = Binary(0,n,arr,x);
    if (index == -1){
        cout <<"Error!!! Don't have the number "<<x;
    }
    else{
    cout <<"Index = "<< index;
    }
}