class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> vec;
        for(int i=1;i<11;i++){
            vec.push_back(N*i);
        }
        return vec;
    }
};