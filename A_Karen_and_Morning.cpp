#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

string AddZero(int value) {
    if (value < 10) return "0" + to_string(value);
    return to_string(value);
}

string ReverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2)); 
    int minute = stoi(time.substr(3, 2));
    int counter = 0;

    string hourStr = AddZero(hour);
    string minStr = AddZero(minute);

    while (ReverseString(hourStr) != minStr) {
        counter++; 
        minute++;

        if (minute == 60) {
            minute = 0;
            hour++;
        }
        if (hour == 24) {
            hour = 0;
        }

        hourStr = AddZero(hour);
        minStr = AddZero(minute);
    }

    cout << counter << '\n';
    return 0;
}
