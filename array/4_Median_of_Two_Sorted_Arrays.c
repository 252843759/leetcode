// this problem is unsolved
// just save the first idea about this problem

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int a[nums1Size+nums2Size+10];
    int i = 0, j = 0, k = 0;
    
    while (i != nums1Size && j != nums2Size)
    {
        if (nums1[i] < nums2[j])
            a[k++] = nums1[i++];
        else
            a[k++] = nums2[j++];
    }
    
    if (i == nums1Size)
    {
        for (; j < nums2Size; ++j)
            a[k++] = nums2[j];
    }
    else
    {
        for (; i < nums1Size; ++i)
            a[k++] = nums2[i];
    }
    
    if (k % 2 == 0)
        return (double)(a[k/2] + a[(k/2)-1]) / 2;
    else
        return (double)(a[(k/2)-1]);
    
}
