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
