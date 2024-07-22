#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void combinationSumUtil(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& current, int start) {
    if (target ==0){
        result.push_back(current);
        return;
    }
    for (int i = start; i < candidates.size(); ++i)
    {
        if(candidates[i]>target){
            continue;
        }
        current.push_back(candidates[i]);
        combinationSumUtil(candidates,target- candidates[i],result,current,i);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> current;
    sort(candidates.begin(),candidates.end());
    combinationSumUtil(candidates,target,result,current,0);
    return result;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 11;

    vector<vector<int>> result = combinationSum(candidates, target);

    cout << "Combinations that sum to " << target << " are:" << endl;
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
