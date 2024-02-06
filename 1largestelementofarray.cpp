// Take array as input from user and find the largest array element


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    int user_input;
    int largest;

    for(int i=0; i<n;i++){
       
        cout<<"enter element : ";
        arr[i]=user_input;
        cin>>user_input;
    }
    largest = arr[0];
    for(int j=0; j<n ;j++){
        
        if(arr[j] > largest){
        largest= arr[j];
        } 
    } cout<<"largest element of array is : "<<largest<<endl;
}
 





