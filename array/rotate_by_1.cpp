#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();

    int last = nums[n - 1];
for (int i = n - 1; i > 0; i--) {
        nums[i] = nums[i - 1];
    }
nums[0] = last;
cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }
return 0;
}
