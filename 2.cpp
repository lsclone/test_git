#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	char* p = new char[64];
	memset(p, 0x00, sizeof(p));
	sprintf(p, "this is a test demo.\n");
	printf("1203 %s\n", p);
	printf("123");
	return 0;
}
