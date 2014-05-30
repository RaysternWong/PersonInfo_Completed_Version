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

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_setFirstName_given_Scarlet_should_return_1_for_ValidName(void);
extern void test_setFirstName_given_OverallName_should_return_0(void);
extern void test_setFirstName_given_empty_should_return_0(void);
extern void test_setLastName_given_Holmes_should_return_1_for_ValidName(void);
extern void test_setLastName_given_OverallName_should_return_0(void);
extern void test_setLastName_given_empty_should_return_0(void);
extern void test_setAge_given_21_should_return_1(void);
extern void test_setAge_given_negative1_should_return_0(void);
extern void test_setAge_given_188_should_return_0(void);
extern void test_setHeight_given_2_should_return_1(void);
extern void test_setTelephone_given_12300456_should_return_1(void);
extern void test_setTelephone_given_023000456_should_return_0(void);
extern void test_setTelephone_given_1234567_should_return_0(void);
extern void test_setTelephone_given_12345678_should_return_0(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_PersonInfo.c";
  UnityBegin();
  RUN_TEST(test_setFirstName_given_Scarlet_should_return_1_for_ValidName, 13);
  RUN_TEST(test_setFirstName_given_OverallName_should_return_0, 25);
  RUN_TEST(test_setFirstName_given_empty_should_return_0, 34);
  RUN_TEST(test_setLastName_given_Holmes_should_return_1_for_ValidName, 46);
  RUN_TEST(test_setLastName_given_OverallName_should_return_0, 58);
  RUN_TEST(test_setLastName_given_empty_should_return_0, 67);
  RUN_TEST(test_setAge_given_21_should_return_1, 78);
  RUN_TEST(test_setAge_given_negative1_should_return_0, 87);
  RUN_TEST(test_setAge_given_188_should_return_0, 96);
  RUN_TEST(test_setHeight_given_2_should_return_1, 106);
  RUN_TEST(test_setTelephone_given_12300456_should_return_1, 135);
  RUN_TEST(test_setTelephone_given_023000456_should_return_0, 144);
  RUN_TEST(test_setTelephone_given_1234567_should_return_0, 153);
  RUN_TEST(test_setTelephone_given_12345678_should_return_0, 162);

  return (UnityEnd());
}
