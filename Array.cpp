////Write a function to find the smallest and largest element of the array:
#include <iostream>
#include <climits>
using namespace std;

int MIN(int num[], int n){
    int smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    for(int i=0;i<n;i++){
        if(num[i]==smallest){
            cout<<"smallest indx : "<<i<<endl;
        }
    }
    return smallest;
}
int MAX(int num[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<num[i]){
            largest=num[i];
        }  
    }
    for(int i=0;i<n;i++){
        if(num[i]==largest){
            cout<<"largest indx : "<<i<<endl;
        }
    }
    return largest;
    }
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int num[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The smallest element is : "<<MIN(num,n)<<endl;
    cout<<"The largest element is : "<<MAX(num,n)<<endl;
}
//Write a function to search an element in the array :
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(search==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the searching element :";
    cin>>search;
    int result=linearsearch(arr,n,search);

    if(result!=-1){
        cout<<"Element present at : "<<result<<"indx"<<endl;
    }
    else
    cout<<"Element not found"<<endl;
}
// Write a function to swap max and min value....
#include<iostream>
using namespace std;
int swapMAXnMIN(int MIN,int MAX){
    swap( MIN,MAX);
    cout<<"MIN : "<<MIN<<endl;
    cout<<"MAX : "<<MAX<<endl;
}
int main(){
    int MIN=3;
    int MAX=9;
    swapMAXnMIN(MIN,MAX);
}
// Write a function to reverse an array :
#include<iostream>
using namespace std;
int ReverseArr(int arr[],int n){
    int start=0;
    int end=n-1;
    if(n%2==0){//for even size of array
        while(start<end){
            swap(arr[start],arr[end]);
            start+=1;
            end-=1;
        }
    }
    else{//for odd size of array
        while(start<=end){
            swap(arr[start],arr[end]);
            start+=1;
            end-=1;
        }
    } 
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArr(arr,n);
    cout<<"Reverse of array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//Write a function to print the unique value of an array:
#include <iostream>
using namespace std;

void printUnique(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements: ";
    printUnique(arr, n);

    return 0;
}
//Write a function to find the intersection of two array's :--
#include<iostream>
using namespace std;
void Arrayintersection(int arr1[],int n,int arr2[],int m){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of 1st array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of 1st array : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of 2nd array : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements of 2nd array : ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"Intersection of two array : ";
    Arrayintersection(arr1,n,arr2,m);
    cout<<endl;
}

