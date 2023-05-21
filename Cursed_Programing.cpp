#include <iostream>
using namespace std;
#define Pointer *
#define heap new
#define MAIN_function main
#define del delete
#define del_array delete[]
#define stop ;
#define automatic auto
#define console_out cout
#define line endl

typedef int integer;
typedef char character;
typedef float floatingpoint;
typedef double idk;

integer MAIN_function() {
	automatic Pointer i = heap integer stop
		Pointer i = 1 stop
		console_out << Pointer i << line << i << line stop
		del i stop
		automatic Pointer k = heap integer[10] stop
		for (integer h = 0; h < 10; ++h) {
			k[h] = h + 1;
		}
	for (integer h = 0; h < 10; ++h) {
		console_out << k[h] << line stop
	}
	del_array k stop
		return 0 stop
}

