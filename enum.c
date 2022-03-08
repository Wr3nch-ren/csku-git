#include <stdio.h>
#include <string.h>

enum DaysOfWeek{
    MON = 5,TUE = 6,WED = 7,THU = 8,FRI = 9,SAT = 10,SUN = 4
};

int main()
{  char day_names[][10]={"", "", "",
                        "Sunday", "Monday", "Tuesday",
                        "Wednesday", "Thursday", "Friday",
                        "Saturday"};
   enum DaysOfWeek today;

   today = MON;
   printf("The day after %s is %s\n", day_names[today], day_names[today+1]);
   printf("Two days after %s is %s\n", day_names[today], day_names[today+2]);
}