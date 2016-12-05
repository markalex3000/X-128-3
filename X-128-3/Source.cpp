// Vector practice with distance between pairs of cities

// Added a comment - to test Github integration.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	vector<double> distances;	//Distances between pairs of cities
	for (double dist; cin >> dist;)
	{
		distances.push_back(dist);
	}

	// clears the cin fail bit and burns the offending character
	if (cin.fail())
	{
		cin.clear();
		char c;
		cin >> c;
	}

	// print out temps
	for (double t : distances) cout << t << '\n';

	// compute total distance
	double sum{ 0 };
	for (double x : distances) sum += x;
	cout << "Total Distance: " << sum << '\n';

	//compute shortest and longest
	sort(distances.begin(), distances.end());
	
	// print out sorte3d temps
	for (double t : distances) cout << t << '\n';

	cout << "The Shortest distance is: " << distances[0] << '\n';
	cout << "The Longest distance is: " << distances[distances.size() - 1] << '\n';
	cout << "The Mean Distance between cities: " << sum / distances.size() << '\n';

	keep_window_open();

	return 0;
}