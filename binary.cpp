#include<iostream>
using namespace std;
int main()
{
    int i,n,search,low,high,flag=0,mid;
    cout<<"Enter number of element in array : ";
    cin>>n;
    int a[n-1];
    cout<<"Enter array element : \n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter element you want to search : ";
    cin>>search;
    
    low=1;
    high=n;

    do
    {
        mid = (high+low)/2;
        if(search<a[mid]){
            high = mid-1;
            flag=0;
        }
        else if (search>a[mid])
        {
            low = mid+1;
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    } while (search != a[mid] && low<= high);
    
    if(flag==1){
        cout<<"Serach is successful\n";
    }else{
        cout<<"Not found\n";
    }

}