//

#include "stdafx.h"
#include<iostream>
#include"IncreasingTripletSubsequence.h"

int main(int,int) {
	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	IncreasingTripletSubSequence is;
	cout << boolalpha << is.increasingTriplet(num) << '\n';
	exit(0);
	return 0;
 }
