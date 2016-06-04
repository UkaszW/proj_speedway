#pragma once

#include <string>
#include <vector>

#define HIT_FORCE 10
#define TIME_INTERVAL 1000000/3
#define WAY_LENGTH 10000

using namespace std;

class Rider
{ 
	static vector <string> names;
	static vector <string> exclusions;

	string _name;

	int  _reaction, _acceleration, _luck;

	static void init();
	static void initArbiter();

public:
	Rider();

	string name() { return _name; }
	double reaction() { return _reaction; }
	int acceleration() { return _acceleration; }
	int luck() { return _luck; }
	
	string description();
	void arbiter();
	double way(int value);
};

void start();
void textcolor(int attr, int fg);
void colorin(int attr, int fg, double in);
void timeSurvey(std::vector < double > &tab, Rider riders[]);
void classification(std::vector < double > &tab, Rider riders[]);