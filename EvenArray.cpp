#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        int n,x;
        cin>>n;
        int acount=0;
        int bcount=0;
        vector<int> vec;
        for(int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);

            if(i%2==0&&vec[i]%2!=0){
                acount++;
            }
            else if(i%2!=0&&vec[i]%2==0){
                bcount++;
            }
        }

        if(acount==bcount){
            cout<<acount<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
    }
return 0;
}