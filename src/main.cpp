#include <iostream>
using namespace std;

char drive;
string input;

bool isSameStr (string a, string b) {
	if (a == b)
		return 1;
	else
		return 0;
}

int main () {
	cout << "GLaDOS v1.09 (c) 1982 Aperture Science, Inc.\n";
	drive = 'B';
	
	while (1) {
		cout << "\n" << drive << ":\\> ";
		cin >> input;
		
		if (isSameStr(input, "lib")) {
			cout << "LIB\n	APPEND\n	ATTRIB\n	COPY\n	DIR\n	ERASE\n	FORMAT\n	INTERROGATE\n	LIB\n	PLAY\n	RENAME\n	TAPEDISK\n";
		}
		else if (isSameStr(input, "append")) {
			cout << "APPEND";
		}
		else if (isSameStr(input,"exit")) {
			break;
		}
		else {
			cout << "'" << input << "' is not recognized as an internal or external command, \noperable program or batch file.";
		}

	}
	
    return 0;
}
