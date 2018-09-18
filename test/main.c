#define CTEST_MAIN

#include <ctest.h>
#include "Fieldfullcomp.h"

CTEST(Fieldfullcomp, Ships_check)
{
	int field2[12][12];
	for (int x=0; x<10;x++){
	for (int y=0; y<10;y++){
	field[x][y]=0;}
	}
	
	int result=Ships_check(field2);
	int expected = 20;
	ASSERT_EQUAL(expected,result);
}
	
