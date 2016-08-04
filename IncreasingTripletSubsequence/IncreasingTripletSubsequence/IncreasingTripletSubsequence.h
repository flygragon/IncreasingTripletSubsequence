#pragma once
#include<vector>
using namespace std;

class IncreasingTripletSubSequence {
public:
	bool increasingTriplet(vector<int>& nums) {
		if (nums.size() <3) return false;
		int len = nums.size();
		vector<int> res;
		res.push_back(nums[0]);
		for (int i = 0; i <len; i++) {
			if (nums[i] <res[0])
				res[0] = nums[i];
			else if (nums[i] >res.back())
				res.push_back(nums[i]);
			else if (res.size() == 2 && nums[i] <res[1] && nums[i] >res[0])
				res[1] = nums[i];
			if (res.size() == 3)
				return true;
		}
		return false;
	}
};