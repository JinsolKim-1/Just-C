#include <stdio.h>

int main()
{
    float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;

    float avg1 =((studentAYear1+studentAYear2+studentAYear3)/3);
    float avg2 =((studentBYear1+studentBYear2+studentBYear3)/3);
    float avg3 =((studentCYear1+studentCYear2+studentCYear3)/3);

    printf("Student name\t1stYGrade\t2ndYGrade\t3rdYGrade\tAvg\n");
    printf("Student A\t%9.2f\t%9.2f\t%9.2f\t%8.2f\n",studentAYear1,studentAYear2,studentAYear3,avg1);
    printf("Student B\t%9.2f\t%9.2f\t%9.2f\t%8.2f\n",studentBYear1,studentBYear2,studentBYear3,avg2);
    printf("Student C\t%9.2f\t%9.2f\t%9.2f\t%8.2f",studentCYear1,studentCYear2,studentCYear3,avg3);

    return 0;
}