#include <iostream>
using namespace std;
int main(){
   int arr[10]={10,9,8,7,6,5,4,3,2,1};
   int n=10;

for(int i=0;i<n;i++){
    int minindex=i;
    
    for(int j=0;j<n;j++){
        if(arr[minindex]<arr[j]){
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
}

for(int x=0;x<n;x++){
    cout<<arr[x]<<" ";
}
    return 0;
}
