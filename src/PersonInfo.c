#include <stdio.h>
#include "PersonInfo.h"



int setFirstName(PersonInfo *info, char *name){
	
	     int i;
		 int j; j++; 
		 name[j]; // use  to check the name character size
	
	
	if ( j==0|| j>21) //if the character size is empty or more than 20 return  0
	 return 0;
	 
	else {

    for(i=0;i<21;i++)
     info-> firstName[i] =*name;
	  return 1; 
	}
	}
	
	
	
int setLastName(PersonInfo *info, char *name){
	
	     int i;
		 int j; j++; 
		 name[j]; // use  to check the name character size
	
	
	if ( j==0|| j>21) //if the character size is empty or more than 20 return  0
	 return 0;
	 
	else {

    for(i=0;i<21;i++)
     info-> lastName[i] =*name;
	  return 1; 
	}
	}
	
	
int setAge(PersonInfo *info, int age){
	info->age = age;
	
    if ( (info->age >= 130) || (info->age <= 0)) //while age more than 130 and less than 0 return 0;
	return 0;
	
	else
	return 1;
}

int setHeight(PersonInfo *info, float height){
	info->height = height;
	
	if( 0 < height < 3) // height is between 1 and 3 meter return 1
	return 1;
	
	else 
	return 0;	
}

int setTelephone(PersonInfo *info , unsigned long int telephone){
	 info->telephone = telephone;
	 
	 // The condition mention telephone is 8 digit and 1stNumber cannot be 0
	 // Then means the valid number is from 10000000 to 99999999
	 if ( (telephone>= 10000000) && (telephone <= 99999999))
	 return 1;
	 
	 else
	 return 0;
	
}
