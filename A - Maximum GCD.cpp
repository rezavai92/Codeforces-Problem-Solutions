// C++ Code to
// Find pair with
// maximum GCD in
// an array
#include <bits/stdc++.h>
using namespace std;

// function to find
// GCD of pair with
// max GCD in the
// array
int findMaxGCD(vector <int> v, int n)
{
	// Calculating MAX in array
	int high = 0;
	for (int i = 0; i < n; i++)
		high = max(high, v[i]);

	// Maintaining count array
	int count[high + 1] = {0};
	for (int i = 0; i < n; i++)
		count[v[i]]++;

	// Variable to store the
	// multiples of a number
	int counter = 0;

	// Iterating from MAX to 1
	// GCD is always between
	// MAX and 1. The first
	// GCD found will be the
	// highest as we are
	// decrementing the potential
	// GCD
	for (int i = high; i >= 1; i--)
	{
		int j = i;
	counter = 0;

		// Iterating from current
		// potential GCD
		// till it is less than
		// MAX
		while (j <= high)
		{
			// A multiple found

			if(count[j] >=2)
			return j;

		else if (count[j] == 1)
				counter++;

			// Incrementing potential
			// GCD by itself
			// To check i, 2i, 3i....
			j += i;

			// 2 multiples found,
			// max GCD found
			if (counter == 2)
				return i;
		}
	}
}

// Driver code
int main()
{
	// Array in which pair
	// with max GCD is to
	// be found

	int T;
	cin>>T;

	while (T--) {
	vector <int> v;
	int a;
	cin>>a;
	for (int i =1;i<=a;i++){
        v.push_back(i);
	}
	// Size of array
	int n = v.size();



	cout << findMaxGCD(v, n)<<endl;


}
}
