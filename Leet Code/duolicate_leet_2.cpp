#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr1[50], arr2[50];
    cout << "Enter the size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter the value" << i<<endl;
        cin >> arr1[i];
    }
    int j,a;
    sort(arr1, arr1 + (n));
    for(int k=0,i=0;i<n;k++,i=j){
        int ele=arr1[i];
        for(j=i;j<n;j++){
            if(ele != arr1[j]){
                // j++;
                break;
            }
             a=j-i;
        }
        arr2[k]=a;
    }
    for(int i =0;i<n;i++){
        cout << arr2[i]<<endl;
    }
}
