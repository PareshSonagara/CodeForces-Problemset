#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    int arr[]={100,20,10,5,1};

    cin>>n;

    for(int j=0;j<5;j++){
        count+=n/arr[j];
        n%=arr[j];
    }

    cout<<count;
return 0;
}