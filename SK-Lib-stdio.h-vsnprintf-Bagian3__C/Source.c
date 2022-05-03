#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2022
*/

char buffer[100];

void StringFormatted(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, 100, format, args);
	va_end(args);
}

int main() {
	StringFormatted("Calling with %d variable argument.\n", 1);
	printf("%s", buffer);
	StringFormatted("Calling with %d variable %s.\n", 2, "arguments");
	printf("%s", buffer);
	StringFormatted("Calling with %d %s %s.\n", 3, "variable", "arguments");
	printf("%s", buffer);

	_getch();
	return 0;
}

