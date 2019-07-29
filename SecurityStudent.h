/* C867_RyanGibney.cpp
   Scripting and Programming - Applications C867
   Ryan Gibney
   Student ID# 000959117
*/

#pragma once
#ifndef securityStudent_h
#define securityStudent_h

#include <stdio.h>
#include "./student.h"

class SecurityStudent : public Student {
	using Student::Student;
public:
	virtual Degree getDegreeProgram();
private:
	Degree degreeProgram = SECURITY;
};

#endif /* securityStudent_h */

