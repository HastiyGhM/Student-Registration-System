#include <string>

using namespace std;

class Student
{
private:

	int StdID;
	string FnameLname;
	string DateBirth;
	string FatherName;
	int BCID;
	string PlaceBirth;
	string DateRegister;

public:

	Student(int StdID,
		string FnameLname,
		string DateBirth,
		string FatherName,
		int BCID,
		string PlaceBirth,
		string DateRegister);

	int getStdID() { return StdID; }
	string getFnameLname() { return FnameLname; }
	string getDateBirth() { return DateBirth; }
	string getFatherName() { return FatherName;  }
	int getBCID() { return BCID; }
	string getPlaceBirth() { return PlaceBirth; }
	string getDateRegister() { return DateRegister; }
};

