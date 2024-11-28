#include <iostream>
#include <string>
using namespace std;

static string getValues(const string& a, const string& b) {
	return (a > b) ? a : b;
}
static char getValues(char a, char b) {
	return (a > b) ? a : b;
}
static int getValues(int a, int b) {
	return (a > b) ? a : b;
}

int main() {

	string type;
	getline(cin, type);
	
		
	if (type == "string") {
		string a, b;
		cin.ignore();
		getline(cin, a);
		getline(cin, b);

		cout << getValues(a, b) << endl;;
	}
	else if (type == "char") {
		char a, b;
		cin >> a >> b;

		cout << getValues(a, b) << endl;
	}
	else if (type == "int") {
		int a, b;
		cin >> a >> b;

		cout << getValues(a, b) << endl;
	}
	
	return 0;
}