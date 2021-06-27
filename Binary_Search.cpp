#include <iostream>
#include <conio.h>
using namespace std;
void Input(int &n, int *arr, int &sum ){
    cout <<"Nhap n = ";
    cin >> n;
    for (int i = 0; i< n; i++){
        cout << "So thu "<<i+1<<" = ";
        cin >> arr[i];
    }
    cout <<"Tong can tim cua day so la : ";
    cin >> sum;
}
void Sort(int &n, int * arr, int *brr){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
    {
        if (arr[j] < arr [i]){
            swap(arr[i], arr[j]);
              }
         }
    }   
}
void SumArray(int &n, int *arr, int *brr){
     for (int i = 0; i < n; i++)
    {
     brr[i]= arr[i] + arr[i+1];
        }
    n = n-1;
}
void OutPut (int n, int *arr){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
}
void Find(int n, int *brr, int sum, int *arr){
    // Binary Search
    int mid, l, r;
    l = 0;
    r = n-1;
    cout << "Day la : \n";
    for (int i = 0; i< mid ; i++){
        mid = (l+r)/2;
        if(brr[mid] > sum ){
            r = mid;
        }
        else s{
            l = mid +1;
        }
    }
}

void day(int &n, int *arr, int *brr){

}
int main(){
    int n, sum;
    int *arr = new int;
    int *brr = new int;
    Input(n,arr,sum);
    Sort(n,arr,brr);
    SumArray(n,arr,brr);
   // OutPut(n,brr,arr);
   // Find(n,brr,sum,arr);
    delete(arr);
    delete(brr);
}