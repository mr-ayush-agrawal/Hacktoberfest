#include<iostream>
using namespace std;
bool search(int arr[],int size,int el){
    for(int i=0;i<size;i++){
        if (arr[i]==el){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    //searching for element 1
    int el;
    cout<<"Enter the element to be searched for"<<endl;
    cin>>el;

    bool found=search(arr,10,el);
    if(found)
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is absent"<<endl;

return 0;
}
