#ifndef PersonInfo_H
#define PersonInfo_H


//#endif // PersonInfo_H

typedef struct PersonInfo_t //basic data structure consist of name(fist/last),age,height,telephone
{
	char firstName[21];
	char lastName[21];
	int age;
	float height;
	unsigned long int telephone;
} PersonInfo;




int setFirstName(PersonInfo *info, char *name);
int setAge(PersonInfo *info , int age);
int setHeight(PersonInfo *info , float height);
int setTelephone(PersonInfo *info , unsigned long int telephone);
#endif // PersonalInfo_H
