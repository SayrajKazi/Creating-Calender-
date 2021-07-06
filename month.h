#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Month 
{  private:
    int   monthname;   // every month name
      int monthstartweekday;
  
  public:
    static int NumberOfDaysInMonth(const int n );
    Month();
    void MonthInitialize( int monthname, int yearstartweekday);

      static const int Monday ;
    static const int Tuesday;
    static const int Wednesday;
    static const int Thursday;
    static const int Friday;
    static const int Saturday;
    static const int Sunday;

    static const int January;
    static const int February;
    static const int March;
    static const int April;
    static const int May;
    static const int June;
    static const int July;
    static const int August;
    static const int September;
    static const int October;
    static const int November;
    static const int December;

    

    

    void printMonth();

};
