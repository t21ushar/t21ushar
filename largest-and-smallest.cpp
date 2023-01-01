#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements:"<<endl;
    int n;
    cin>>n;
    int num[n];
    int smallest=num[0];
    int largest=num[0];
    int i;
    for ( i =0; i<n; i++){
        cin>>num[i];     
    }
    for (i=1; i<n; i++){
        if (num[i]>largest){
            largest = num[i];      
        }
        if (num[i]<smallest){
            smallest = num[i];
        }   
    }
    cout<<"Smallest is "<<smallest<<endl;
    cout<<"Largest is "<<largest<<endl; 
    return 0;
}
