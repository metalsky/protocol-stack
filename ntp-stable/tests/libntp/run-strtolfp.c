/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "config.h"
#include "ntp_stdlib.h"
#include "ntp_calendar.h"
#include "lfptest.h"

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_PositiveInteger(void);
extern void test_NegativeInteger(void);
extern void test_PositiveFraction(void);
extern void test_NegativeFraction(void);
extern void test_PositiveMsFraction(void);
extern void test_NegativeMsFraction(void);
extern void test_InvalidChars(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

char const *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  UnityBegin("strtolfp.c");
  RUN_TEST(test_PositiveInteger, 12);
  RUN_TEST(test_NegativeInteger, 13);
  RUN_TEST(test_PositiveFraction, 14);
  RUN_TEST(test_NegativeFraction, 15);
  RUN_TEST(test_PositiveMsFraction, 16);
  RUN_TEST(test_NegativeMsFraction, 17);
  RUN_TEST(test_InvalidChars, 18);

  return (UnityEnd());
}
