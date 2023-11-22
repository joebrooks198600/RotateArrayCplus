// RotateArrayConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void rotate(std::vector<int>& nums, int k)
{
    int n = nums.size();
    k = k % n;
    
    std::vector<int> temp(nums.end() - k, nums.end());
    
    // Move the previous n-k elements back k positions
    for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    //Place the temporarily stored k elements at the front of the array    
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];        
    }
}

int main()
{    
    //For example, with n = 7 and k = 3, the array[1, 2, 3, 4, 5, 6, 7] is rotated to[5, 6, 7, 1, 2, 3, 4].
    std::vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;

    rotate(nums, k); //call function

    //Output result
    std::cout << "Rotated Array: ";

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
