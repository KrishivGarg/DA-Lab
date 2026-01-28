#include<bits/stdc++.h>
using namespace std;

bool static comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

void platforms(int n, vector<double>& at, vector<double>& dt){
    sort(at.begin(), at.end());
    sort(dt.begin(), dt.end());
    int cnt = 0, platforms = 0, i = 0, j = 0;
    while(i<n && j<n){
        if(at[i] <= dt[j]){
            platforms++;
            cnt = max(cnt, platforms);
            i++;
        }
        else{
            platforms--;
            j++;
        }
    }
    cout << "Minimum number of platforms required = " << cnt << endl;
}

int main(){
    int n;
    cout << "Enter number of trains : ";
    cin >> n;
    vector<double> at(n);
    cout << "Enter arrival times :" << endl;
    for(int i=0; i<n; i++){
        cin >> at[i];
    }
    vector<double> dt(n);
    cout << "Enter departure times :" << endl;
    for(int i=0; i<n; i++){
        cin >> dt[i];
    }
    platforms(n, at, dt);
    return 0;
}
