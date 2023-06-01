#include <stdio.h>
int grade();
int main(void)
{
    int mathG, scienceG, englishG, filipinoG, peG;
    int t_grade,start;
    
    start=1;
    
do{
    printf("Enter Student grades:\n");
    printf("Math:");
    scanf("%d", &mathG);
    printf("Science:");
    scanf("%d", &scienceG);
    printf("English:");
    scanf("%d", &englishG);
    printf("Filipino:");
    scanf("%d", &filipinoG);
    printf("PE:");
    scanf("%d", &peG);

    t_grade = grade(mathG, scienceG, englishG, filipinoG, peG);//calls the grade function 

    printf("Students average:%d\n", t_grade);
    printf("Student Status:");
    if (t_grade > 90)//if average is 90+
    {
        printf("Student is excellent!");
    }
    else if (mathG > 75 && scienceG > 75 && englishG > 75 && filipinoG > 75 && peG > 75)//if he/she passed all the courses
    {
        printf("Student is very good!");
    }
     else if (mathG <= 75 && scienceG <= 75 && englishG <= 75 && filipinoG <= 75 && peG <= 75)//if he fails all the courses 
    {
        printf("Student should be kicked out!");
    }
    else if (englishG <= 75 && filipinoG <= 75)//he/she fails two 3-unit courses.
    {
        printf("Student is advised to rest!");
    }
    else if (mathG <= 75 && scienceG <= 75)//he/she fails two 4-unit courses.
    {
        printf("Student is advised to shift!");
    }
    else
    printf("Student is good/average!");
    printf("\nWant to input another student? (1 for yes/ 0 for no):");
    scanf("%d",&start);
    
}while(start!=0);
printf("Good bye. Program Terminating...");
   
}
int grade(int a, int b, int c, int d, int e)
{
    //computes average
    int math, science, english, filipino, pe;
    int sum_units;
    int average;

    math = 4;
    science = 4;
    english = 3;
    filipino = 3;
    pe = 2;

    sum_units = math + science + english + filipino + pe;

    average = ((a * math) + (b * science) + (c * english) + (d * filipino) + (e * pe)) / sum_units;
    return average;
}