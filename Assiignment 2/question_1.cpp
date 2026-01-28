#include<bits/stdc++.h>
using namespace std;

bool static comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

void activity(int n, vector<int>& start, vector<int>& finish){
    vector<pair<int, int>> activities;
    vector<pair<int, int>> res;
    for(int i=0; i<n; i++){
        activities.push_back({start[i], finish[i]});
    }
    sort(activities.begin(), activities.end(), comp);
    int last = activities[0].second;
    res.push_back({activities[0].first, activities[0].second});
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(activities[i].first >= last){
            res.push_back({activities[i].first, activities[i].second});
            last = activities[i].second;
            cnt ++;
        }
    }
    cout << "Maximum number of activities = " << cnt << endl;
    cout << "Selected activities: ";
    for(auto it : res){
        cout << "(" << it.first << ", " << it.second << ")" << " ";
    }
}

int main(){
    int n;
    cout << "Enter number of activities : ";
    cin >> n;
    vector<int> start(n);
    cout << "Enter starting times :" << endl;
    for(int i=0; i<n; i++){
        cin >> start[i];
    }
    vector<int> finish(n);
    cout << "Enter finishing times :" << endl;
    for(int i=0; i<n; i++){
        cin >> finish[i];
    }
    
    return 0;
}
