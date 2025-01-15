#include <iostream>
using namespace std;
int main()
{
    int number,time;
    cin>>number>>time;
    char arr[100];
    cin>>arr;
    while (time--){
        for(int i=0;i<number-1;i++){
            if(arr[i]=='B'&&arr[i+1]=='G'){
                arr[i]='G';
                arr[i+1]='B';
                i++;
            }
        }
    }
    
    
    cout<<arr;

return 0;
}