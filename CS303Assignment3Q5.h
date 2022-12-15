#pragma once
#include <iostream>
#include <map>
#include <iterator>
#include <iomanip>
using namespace std;

int main() {
	map<string, string> stateDataMap;

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

		cout << setw(15) << mapltr->first << setw(15) << mapltr->second << endl;
	cout << endl;

	map<string, string>::iterator maplte;
	maplte = stateDataMap.find("California");
	if (maplte != stateDataMap.end())
		maplte->second = "Los Angeles";





}






