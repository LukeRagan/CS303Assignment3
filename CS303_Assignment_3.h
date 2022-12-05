#pragma once
#include <iostream>
#include <queue>

using namespace std;

int move_to_rear()
{
	queue<int> daQueue; //creates the queue data structure
	
	daQueue.push(6); // lines 11-14 are the numbers 6, 7, 8, and 9 being added to the queue using the push function
	daQueue.push(7);
	daQueue.push(8);
	daQueue.push(9);

	const int first = daQueue.front(); // the int first is created to equal the front element in daQueue
	daQueue.pop(); // removes the first element of daQueue
	daQueue.push(first); //adds the element to the back of the queue using first function since it stored the front value of daQueue

	
	return daQueue.front(); // returns new element in the front of daQueue
  
}