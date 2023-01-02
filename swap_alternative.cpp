#include <bits/stdc++.h>
using namespace std;
class Swap_alternative
{
    public:
    void Swap(int arr[], int size)
    {
        for(int i = 0;i < size; i+=2){
        swap(arr[i],arr[i+1]);
        }
    }
};
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Swap_alternative obj;
    obj.Swap(arr, 9);
    for(int i = 0;i< 9;i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}