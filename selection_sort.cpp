#include <iostream>
#include<algorithm>
using namespace std;
int smallest(int arr[],int in,int fi){
    int sm=INT_MAX;
    int smi=0;
    for(int i=in;i<=fi;i++){
        if(arr[i]<=sm){
            sm=arr[i];
            smi=i;
        }
    }
    return smi;
}
int main(){
    int n;
    cout<<"Enter the size of array :- ";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array before sorting\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int s=smallest(arr,i,n-1);
        if(arr[s]<arr[i]){
            int tem=arr[i];
            arr[i]=arr[s];
            arr[s]=tem;
        }
    }
    cout<<"Array after sorting\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}