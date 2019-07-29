/* C867_RyanGibney.cpp
   Scripting and Programming - Applications C867
   Ryan Gibney
   Student ID# 000959117
*/

#pragma once
#ifndef networkStudent_h
#define networkStudent_h

#include <stdio.h>
#include "./student.h"

class NetworkStudent : public Student {
	using Student::Student;
public:
	virtual Degree getDegreeProgram();
private:
	Degree degreeProgram = NETWORK;
};

#endif /* networkStudent_h */


