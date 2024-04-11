#pragma once
class Student
{
private:
	char name[256];
	struct {
		float history, math, english;
	}grades;

public:
	Student();
	void setName(const char *name,int length);
	char *getName();
	void setEnglish(float grade);
	float getEnglish();
	void setHistory(float grade);
	float getHistory();
	void setMath(float grade);
	float getMath();
	float getAvgGrade();

};

