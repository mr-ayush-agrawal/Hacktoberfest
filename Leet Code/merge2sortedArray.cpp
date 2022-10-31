#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    
    while(j<m) {
        arr2[k++] = arr2[j++];
    }
}

void inputarray(int arr[]){
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value" << i<<endl;
        cin >> arr[i];
    }
}
void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}


int main() {
    int arr1[50],arr2[50],arr3[50];
    
    inputarray(arr1);
    inputarray(arr2);
    inputarray(arr3);

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}
