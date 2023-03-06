#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

int main()
{
    vector <int> x = {1, 2 ,3, 0, 0, 0};
    vector <int> y = {2, 5, 6};

    merge(x, 3, y, 3);
    
    for(int l = 0; l < x.size(); l++)
        cout << x[l] << " ";
    cout << endl;

    return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    nums1.resize(m+n);
    for(int i = 0; i < n; i++)
    {
        nums1[i + m] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
}