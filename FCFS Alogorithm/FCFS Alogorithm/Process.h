#pragma once
#include <string>
#include <queue>
using namespace std;

#ifndef Process_h
#define Process_h

class Process
{
private:
	queue<int> bursts;			// Queue for each process's bursts
	queue<int> i_o;				// Queue for each process's I/O times
	int arrivalTime;			// Indicates when a process arrives in Process queue
	int responseTime;			// Keeps track of process's response time
	int finishedTime;			// Keeps track of when the process has finished
	string name;				// Name of process
	int allTime;

public:
	Process(int bursts[], int i_o[], string name);		// Default constructor
	~Process();										// Destructor

};


#endif // !Process_h