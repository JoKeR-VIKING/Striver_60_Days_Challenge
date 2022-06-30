class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        unordered_map<int, bool> rowMap, columnMap;
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[0].size();j++)
            {
                if (matrix[i][j] == 0)
                {
                    rowMap[i] = true;
                    columnMap[j] = true;
                }
            }
        }
        
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[0].size();j++)
            {
                if (rowMap.count(i) || columnMap.count(j))
                    matrix[i][j] = 0;
            }
        }
    }
};
