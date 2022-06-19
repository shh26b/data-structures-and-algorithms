template <typename tp>
void __counting_sort__(vector<tp> &arr)
{
    // Find the largest element of the array
    int mx = arr[0], i, n = arr.size();
    for (i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    // Create & Initialize count array with all zeros.
    vector<int> ct(mx + 1, 0);
    // Store the count of each element
    for (i = 0; i < n; i++)
    {
        ct[arr[i]]++;
    }
    // Store the cumulative count of each array
    for (i = 1; i <= mx; i++)
    {
        ct[i] += ct[i - 1];
    }
    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    vector<tp> output(n);
    for (i = 0; i < n; i++)
    {
        output[ct[arr[i]] - 1] = arr[i];
        ct[arr[i]]--;
    }
    // Copy the sorted elements into original array
    for (i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
