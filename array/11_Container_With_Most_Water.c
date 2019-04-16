// use official solution

int maxArea(int* height, int heightSize) {
    int maxarea = 0, l = 0, r = heightSize - 1;
    while (r > l)
    {
        int area = (r - l) * (height[l] > height[r] ? height[r] : height[l]);
        maxarea = area > maxarea ? area : maxarea;
        
        // won't reduce the area after increase the smaller edge
        if (height[l] > height[r])
            r--;
        else
            l++;
    }
    
    return maxarea;
}
