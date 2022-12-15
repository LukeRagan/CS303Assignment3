#include <iostream>
#include <iomanip>
#include <map>
#include <iterator>

using namespace std;

int main()
{

	map<string, string> stateDataMap; // making map data structure.
	// 13-18 is putting the states and their capitols in the map as pairs.
	stateDataMap.insert(make_pair("Nebraska", "Lincoln"));
	stateDataMap.insert(make_pair("New York", "Albany"));
	stateDataMap.insert(make_pair("Ohio", "Columbus"));
	stateDataMap.insert(make_pair("California", "Sacramento"));
	stateDataMap.insert(make_pair("Massachusetts", "Boston"));
	stateDataMap.insert(make_pair("Texas", "Austin"));

	map<string, string>::iterator mapltr;

	cout << left;
	cout << "The elements of stateDataMap:" << endl;

	for (mapltr = stateDataMap.begin();
		mapltr != stateDataMap.end(); mapltr++)

		cout << setw(15) << mapltr->first << setw(15) << mapltr->second << endl; // prints out the map 
	cout << endl;

	// 32-36 change the capitol of california to los angeles, then prints it.
	mapltr = stateDataMap.find("California"); 
	if (mapltr != stateDataMap.end()) {
		mapltr->second = "Los Angeles";
		cout << setw(15) << mapltr->first << setw(15) << mapltr->second << endl;
		cout << endl;
	}
	
	// takes a user input
	string x;
	cout << "Enter one of these states: New_York, Ohio, California, Massachusetts, Texas, Nebraska.\n";
	cin >> x;
	cout << "\n";
	cout << "You Entered " << x << "\n";
	// depending on what the user entered, prints out the corresponding capitol city.
	if (x == "Ohio") {
		cout << "The state's capitol is Columbus." << "\n";
	}
	else if (x == "California") {
		cout << "The state's capitol is Los Angeles." << "\n";
	}
	else if (x == "New_York") {
		cout << "The state's capitol is Albany." << "\n";
	}
	else if (x == "Massachusetts") {
		cout << "The state's capitol is Boston." << "\n";
	}
	else if (x == "Texas") {
		cout << "The state's capitol is Austin." << "\n";
	}
	else if (x == "Nebraska") {
		cout << "The state's capitol is Lincoln." << "\n";
	}
	else {
		cout << "Try Again.";
	}
}
