#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid =s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;

        } 
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;   
        }
        return -1;
    }




int main(){
    int evenarr[]={2,4,6,8,10};
    int oddarr[]={1,3,5,7,9};
    int evenindex=binarysearch(evenarr,5,8);
    cout<<"index of 8 is:"<<evenindex<<endl;
    int oddindex=binarysearch(oddarr,5,9);
    cout<<"index of 9 is:"<<oddindex<<endl;

}