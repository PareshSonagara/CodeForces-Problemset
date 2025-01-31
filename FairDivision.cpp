#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;

    while(num--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int& i : vec){
            cin >> i;
        }

        int one = 0, two = 0;

        for(int i = 0; i < n; i++){
            if(vec[i] == 1){
                one++;
            }
            else if (vec[i] == 2){
                two++;
            }
        }

        int totalWeight = one + two * 2;
        if(totalWeight % 2 != 0){
            cout << "NO" << endl;
        }
        else if(one == 0 && (two % 2 != 0)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
