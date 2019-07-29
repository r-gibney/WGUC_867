/* C867_RyanGibney.cpp
   Scripting and Programming - Applications C867
   Ryan Gibney
   Student ID# 000959117
*/

#pragma once
#ifndef softwareStudent_h
#define softwareStudent_h

#include <stdio.h>
#include "./student.h"

class SoftwareStudent : public Student {
	using Student::Student;
public:
	virtual Degree getDegreeProgram();
private:
	Degree degreeProgram = SOFTWARE;
};

#endif /* softwareStudent_h */
