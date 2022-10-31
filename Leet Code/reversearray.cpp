#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int *start = &arr[0];
    int *end = &arr[n-1];
    while(start<=end){
        swap(*start,*end); //it is a predefine function for swaping 
        // int temp;
        // temp = *start;
        // *start = *end;
        // *end = temp;
        start++;
        end--;
    }
}
int main(){
    int arr [5]={2,7,5,9,11};
    int brr [4]={1,2,3,4};
    //printing the intial array
    cout<<"printing the odd array"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    reverse(arr,5);
    cout<<endl;
    //printing the final array
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    //printing the intial array
    cout<<"printing the even array"<<endl;
    for(int i=0;i<4;i++)
        cout<<brr[i]<<" ";
    reverse(brr,4);
    cout<<endl;
    //printing the final array
    for(int i=0;i<4;i++)
        cout<<brr[i]<<" ";
    
    return 0;
}
