#include <iostream>
using namespace std;
int main()
{
    int arr[10001]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi1=0;
    int maxi2=0;
    int s=0,d=0;
    int pre=0,sef=n-1;
    while(pre<sef){
        if(arr[pre]>arr[sef]){
            maxi1=arr[pre];
        }
        else{
            maxi1=arr[sef];
        }
        s+=maxi1;
        if(maxi1==arr[pre]){
            pre++;
        }
        else{
            sef--;
        }
        if(arr[pre]>arr[sef]){
            maxi2=arr[pre];
        }
        else{
            maxi2=arr[sef];
        }
        d+=maxi2;
        if(maxi2==arr[pre]){
            pre++;
        }
        else{
            sef--;
        }
    }
    if((n%2)!=0){
        s+=arr[pre];
    }
    cout<<s<<" "<<d;
    
return 0;
}