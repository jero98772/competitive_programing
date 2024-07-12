#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
};

bool compareInterval(const Interval &a, const Interval &b){
    return a.end < b.end;

}

int maxNonOverlappingIntervals(vector<Interval>& intervals) {
    if (intervals.empty()) return 0;

    // Sort intervals based on their end times
    sort(intervals.begin(),intervals.end(),compareInterval);

    int count = 1;
    int lastEndTime = intervals[0].end;
    cout<<"start"<<intervals[0].start<<"   end:"<<intervals[0].end;

    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i].start >= lastEndTime) {
        cout<<"start"<<intervals[i].start<<"   end:"<<intervals[i].end;
            ++count;
            lastEndTime = intervals[i].end;
        }
    }

    return count;
}

int main() {
    vector<Interval> intervals = {{1, 3}, {2, 4}, {3, 5}, {5, 7},{2,3},{1,7}};

    int result = maxNonOverlappingIntervals(intervals);
    cout << "\nMaximum number of non-overlapping intervals: " << result << endl;

    return 0;
}
