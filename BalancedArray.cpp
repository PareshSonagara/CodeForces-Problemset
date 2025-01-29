#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
    
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<endl;
            vector<int> vec;
            int evensum=0,oddsum=0;
            
            for(int i=0;i<n/2;i++){
                int even=2*(i+1);
                vec.push_back(even);
                evensum+=even;
            }

            for(int i=1;i<n/2;i++){
                int odd=(2*i)-1;
                vec.push_back(odd);
                oddsum+=odd;
            }
            
            vec.push_back(evensum-oddsum);

            for(int y:vec){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}