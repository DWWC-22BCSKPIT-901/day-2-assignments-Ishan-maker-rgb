#include <bits/stdc++.h>

using namespace std;

int maxArea(const vector<int>& height) {
    int maxWater = 0;
    int left = 0, right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        maxWater = max(maxWater, width * currentHeight);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return maxWater;
}

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights of the lines: ";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    int result = maxArea(height);
    cout << "The maximum amount of water a container can store is: " << result << endl;

    return 0;
}
