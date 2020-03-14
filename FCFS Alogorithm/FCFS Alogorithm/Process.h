// Header File for the Process Class
#pragma once
#include <string>
#include <queue>
using namespace std;

#ifndef Process_h
#define Process_h

class Process
{
public:
	queue<int> bursts;			// Queue for each process's bursts
	queue<int> i_o;				// Queue for each process's I/O times
	int arrivalTime;			// Indicates when a process arrives in Process queue
	int responseTime;			// Keeps track of process's response time
	int finishedTime;			// Keeps track of when the process has finished
	string name;				// Name of process
	int allTime;

	Process(int bursts[], int i_o[], string name, int burstSize, int ioSize);		// Default constructor
	~Process();																		// Destructor

	queue<int> getBursts() { return bursts; }    // Getter for bursts
	queue<int> getI_O() { return i_o; }			 // Getter for I_O
	string getName() { return name; }			 // Getter for name
};


#endif // !Process_h