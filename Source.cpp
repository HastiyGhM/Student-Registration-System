#include<iostream>
#include<fstream>
#include "sqlite3.h"

using namespace std;

int main() {

	sqlite3* db;
	int res;
	string sql;

	res = sqlite3_open("stdRegDB.db", &db);
	if (res) {
		cerr << sqlite3_errmsg(db);
		return 0;
	}
	else {
		clog << "Open Data Base Successfully" << "\n";
	}


	

}