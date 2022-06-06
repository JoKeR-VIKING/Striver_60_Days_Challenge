vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index_one = permutation.size() - 2, index_two = permutation.size() - 1;
    
    for (;index_one>=0;index_one--)
    {
        if (permutation[index_one] < permutation[index_one + 1])
            break;
    }
    
    if (index_one >= 0)
    {
        for (;index_two>=0;index_two--)
        {
            if (permutation[index_one] < permutation[index_two])
                break;
        }
        
        swap(permutation[index_one], permutation[index_two]);
        reverse(permutation.begin() + index_one + 1, permutation.end());
    }
    else
        reverse(permutation.begin(), permutation.end());
    
    return permutation;
}
