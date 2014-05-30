#include "unity.h"
#include "PersonInfo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

// FirstName test
void test_setFirstName_given_Scarlet_should_return_1_for_ValidName(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setFirstName( &PersonInfo,  "Scarlet");
	TEST_ASSERT_EQUAL ( 1  , result);
		
	
}


void test_setFirstName_given_OverallName_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result  = setFirstName(&PersonInfo,"AAAAAAAAAAAAAAAAAAAAAAA");
	TEST_ASSERT_EQUAL(0 , result);
}

void test_setFirstName_given_empty_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setFirstName(&PersonInfo,"");
	TEST_ASSERT_EQUAL(0 , result);
}



//LastName test
void test_setLastName_given_Holmes_should_return_1_for_ValidName(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setLastName( &PersonInfo,  "Holmes");
	TEST_ASSERT_EQUAL ( 1  , result);
		
	
}


void test_setLastName_given_OverallName_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result  = setLastName( &PersonInfo,"BBBBBBBBBBBBBBBBBBBBBBBBB");
	TEST_ASSERT_EQUAL(0 , result);
}

void test_setLastName_given_empty_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setLastName( &PersonInfo,"");
	TEST_ASSERT_EQUAL(0 , result);
}

//testage

void test_setAge_given_21_should_return_1(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setAge(&PersonInfo,21);
	TEST_ASSERT_EQUAL(1 , result);
}

void test_setAge_given_negative1_should_return_0(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setAge(&PersonInfo,-1);
	TEST_ASSERT_EQUAL(0 , result);
}

void test_setAge_given_188_should_return_0(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result= setAge(&PersonInfo,188);
	TEST_ASSERT_EQUAL(0 , result);
}

//test height
void test_setHeight_given_2_should_return_1(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setHeight(&PersonInfo,2);
	TEST_ASSERT_EQUAL(1 , result);
}

void est_setHeight_given_negative1_should_return_0(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setHeight(&PersonInfo,-1);
	TEST_ASSERT_EQUAL(0 , result);
}

void est_setHeight_given_4_should_return_0(void)
{	
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setHeight(&PersonInfo,4);
	TEST_ASSERT_EQUAL(0 , result);
}

// test telephone

void test_setTelephone_given_12300456_should_return_1(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setTelephone(&PersonInfo,12300456);
	TEST_ASSERT_EQUAL(1 , result);
}

void test_setTelephone_given_023000456_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setTelephone(&PersonInfo,02300456);
	TEST_ASSERT_EQUAL(0 , result);
}

void test_setTelephone_given_1234567_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setTelephone(&PersonInfo,1234567);
	TEST_ASSERT_EQUAL(0 , result);
}

void test_setTelephone_given_12345678_should_return_0(void)
{
	int result;
	struct PersonInfo_t PersonInfo;
	
	result = setTelephone(&PersonInfo,123456789);
	TEST_ASSERT_EQUAL(0 , result);
}