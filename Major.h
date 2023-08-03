#include <string>

class Major
{
	
private:

	int MID;
	string MName;

public:

	Major(int MID, string MName);

	int getMID() { return MID; }
	string getMName() { return MName; }

};

