#include "unity.h"
#include "PersonInfo.h"


void setUp(void)

{

}



void tearDown(void)

{

}





void test_setFirstName_given_Scarlet_should_return_1_for_ValidName(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setFirstName( &PersonInfo, "Scarlet");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);





}





void test_setFirstName_given_OverallName_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setFirstName(&PersonInfo,"AAAAAAAAAAAAAAAAAAAAAAA");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

}



void test_setFirstName_given_empty_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setFirstName(&PersonInfo,"");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);

}









void test_setLastName_given_Holmes_should_return_1_for_ValidName(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setLastName( &PersonInfo, "Holmes");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)52, UNITY_DISPLAY_STYLE_INT);





}





void test_setLastName_given_OverallName_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setLastName( &PersonInfo,"BBBBBBBBBBBBBBBBBBBBBBBBB");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

}



void test_setLastName_given_empty_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setLastName( &PersonInfo,"");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

}







void test_setAge_given_21_should_return_1(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setAge(&PersonInfo,21);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_negative1_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setAge(&PersonInfo,-1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)93, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_188_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result= setAge(&PersonInfo,188);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)102, UNITY_DISPLAY_STYLE_INT);

}





void test_setHeight_given_2_should_return_1(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setHeight(&PersonInfo,2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)112, UNITY_DISPLAY_STYLE_INT);

}



void est_setHeight_given_negative1_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setHeight(&PersonInfo,-1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

}



void est_setHeight_given_4_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setHeight(&PersonInfo,4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)130, UNITY_DISPLAY_STYLE_INT);

}







void test_setTelephone_given_12300456_should_return_1(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setTelephone(&PersonInfo,12300456);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)141, UNITY_DISPLAY_STYLE_INT);

}



void test_setTelephone_given_023000456_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setTelephone(&PersonInfo,02300456);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)150, UNITY_DISPLAY_STYLE_INT);

}



void test_setTelephone_given_1234567_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setTelephone(&PersonInfo,1234567);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)159, UNITY_DISPLAY_STYLE_INT);

}



void test_setTelephone_given_12345678_should_return_0(void)

{

 int result;

 struct PersonInfo_t PersonInfo;



 result = setTelephone(&PersonInfo,123456789);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);

}
