// FCFS Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <queue>
#include "Process.h"
using namespace std;

Process::Process(int bursts[], int i_o[], string name)
{
	cout << bursts[1] << endl;
	cout << i_o[1] << endl;
	cout << name << endl;
}

Process::~Process()
{
	cout << "Processes is destroyed" << endl;
}

int main()
{
	int bursts[] = { 1,5 };
	int i_o[] = { 2,6 };

	Process P1(bursts, i_o, "P1");
}

