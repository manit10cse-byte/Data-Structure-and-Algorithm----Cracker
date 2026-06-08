Write a function to perform linearsearch on vector:
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> &vec,int search){
    for(int i=0;i<vec.size();i++){
        if(search==vec[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>vec;
    vec.push_back(100);
    vec.push_back(8);
    vec.push_back(32);
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    int search;
    cout<<"Enter the element to search : ";
    cin>>search;
    cout<<linearsearch(vec,search);
    } 

//Write a function to reverse the vector:
#include<iostream>
#include<vector>
using namespace std;
void ReverseVec(vector<int> &vec){
    int size=vec.size();
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(vec[start],vec[end]);
        start+=1;
        end-=1;
    }
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    vector<int> vec(size);
    cout<<"Enter the elements : ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Reverse of vector : ";
    ReverseVec(vec);
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
