#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements:"<<endl;
    int n;
    cin>>n;
    int num[n];
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int i;
    for ( i =0; i<n; i++){
        cin>>num[i];     
    }
    for (i=0; i<n; i++){
        if (num[i]>largest){
            largest = num[i];      
        }
        if (num[i]<smallest){
            smallest = num[i];
        }   
    }
    cout<<smallest<<endl;
    cout<<largest<<endl; 
    return 0;
}