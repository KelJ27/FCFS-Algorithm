// FCFS Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <queue>
#include "Process.h"
using namespace std;

Process::Process(int bursts[], int i_o[], string name, int burstSize, int ioSize)
{
	int i;

	// Loop for adding burst Array values into the burst Queue
	for (i = 0; i < burstSize; i++)
	{
		this->bursts.push(bursts[i]);
	}

	// Loop for adding IO Array values into the IO Queue
	for (i = 0; i < ioSize; i++)
	{
		this->i_o.push(i_o[i]);
	}


}

Process::~Process()
{
	cout << "Processes are destroyed" << endl;
}

int main()
{
	// Temporary arrays for loading values into each object's queue
	int p1bursts[] = { 5,3,5,4,6,4,3,4 };
	int p1i_o[] = { 27,31,43,18,22,26,24 };

	int p2bursts[] = { 4,5,7,12,9,4,9,7,8 };
	int p2i_o[] = { 48,44,42,37,76,41,31,43 };

	int p3bursts[] = { 8, 12,18,14,4,15,14,5,6 };
	int p3i_o[] = { 33,41,65,21,61,18,26,31 };

	int p4bursts[] = { 3,4,5,3,4,5,6,5,3 };
	int p4i_o[] = { 35,41,45,51,61,54,82,77 };

	int p5bursts[] = { 16,17,5,16,7,13,11,6,3,4 };
	int p5i_o[] = { 24,21,36,26,31,28,21,13,11 };

	int p6bursts[] = { 11,4,5,6,7,9,12,15,8 };
	int p6i_o[] = { 22,8,10,12,14,18,24,30 };

	int p7bursts[] = { 14,17,11,15,4,7,16,10 };
	int p7i_o[] = { 46,41,42,21,32,19,33 };

	int p8bursts[] = { 4,5,6,14,16,6 };
	int p8i_o[] = { 14,33,51,73,87 };

	// Objects P1-P8 are created
	Process P1(p1bursts, p1i_o, "P1", sizeof(p1bursts) / sizeof(p1bursts[0]), sizeof(p1i_o) / sizeof(p1i_o[0]));
	Process P2(p2bursts, p2i_o, "P2", sizeof(p2bursts) / sizeof(p2bursts[0]), sizeof(p2i_o) / sizeof(p2i_o[0]));
	Process P3(p3bursts, p3i_o, "P3", sizeof(p3bursts) / sizeof(p3bursts[0]), sizeof(p3i_o) / sizeof(p3i_o[0]));
	Process P4(p4bursts, p4i_o, "P4", sizeof(p4bursts) / sizeof(p4bursts[0]), sizeof(p4i_o) / sizeof(p4i_o[0]));
	Process P5(p5bursts, p5i_o, "P5", sizeof(p5bursts) / sizeof(p5bursts[0]), sizeof(p5i_o) / sizeof(p5i_o[0]));
	Process P6(p6bursts, p6i_o, "P6", sizeof(p6bursts) / sizeof(p6bursts[0]), sizeof(p6i_o) / sizeof(p6i_o[0]));
	Process P7(p7bursts, p7i_o, "P7", sizeof(p7bursts) / sizeof(p7bursts[0]), sizeof(p7i_o) / sizeof(p7i_o[0]));
	Process P8(p8bursts, p8i_o, "P8", sizeof(p8bursts) / sizeof(p8bursts[0]), sizeof(p8i_o) / sizeof(p8i_o[0]));

	queue<Process> readyQueue;   // Queue variable that holds all the processes in the Ready Queue
	queue<Process> ioQueue;		 // Queue variable that holds all the processes in the I/O Queue

	// All processes are pushed into the Ready Queue, and start at arrival time 0
	readyQueue.push(P1);
	readyQueue.push(P2);
	readyQueue.push(P3);
	readyQueue.push(P4);
	readyQueue.push(P5);
	readyQueue.push(P6);
	readyQueue.push(P7);
	readyQueue.push(P8);
	



}

