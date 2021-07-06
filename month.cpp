#include "month.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
Month::Month(){};

 const int Month:: January=1;
 const int Month:: February=2;
 const int Month:: March=3;
 const int Month:: April=4;
 const int Month:: May=5;
 const int Month:: June=6;
 const int Month:: July=7;
 const int Month:: August=8;
 const int Month:: September=9;
 const int Month:: October=10;
 const int Month:: November=11;
 const int Month:: December=12;

 const int Month:: Monday=0;
 const int Month:: Tuesday=1;
 const int Month:: Wednesday=2;
 const int Month:: Thursday=3;
 const int Month:: Friday=4;
 const int Month:: Saturday=5;
 const int Month:: Sunday=6;


void Month::MonthInitialize( int monthname, const int yearstartweekday){
            
            
            this->monthname= monthname;
            if(monthname==1){
                monthstartweekday = yearstartweekday;
              //  cout << monthstartweekday << endl;
            }else{
                  
                    //int currentMonthEndDay;
                    int sd= 0;
                for(int i=1; i < monthname; i++){
                     sd=sd+ NumberOfDaysInMonth(i);
                }
                monthstartweekday= (sd+yearstartweekday)%7;

            }

//NumberOfDaysInMonth(January);

}
            
              int Month:: NumberOfDaysInMonth(const int n ){
                if(n==January)return 31;
                if(n==February)return 28;
                if(n==March)return 31;
                if(n==April)return 30;
                if(n==May)return 31;
                if(n==June)return 30;
                if(n==July)return 31;
                if(n==August)return 31;
                if(n==September)return 30;
                if(n==October)return 31;
                if(n==November)return 30;
                if(n==December)return 31;
            return 0;
            }

void Month:: printMonth(){
    static const string monthArr [13]= {"Nothing","January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        string    stringname= monthArr[monthname];
    cout<< stringname <<endl;
    cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;
    string Firstline=" ";
    for(int i=0; i<monthstartweekday; i++){ ///adding whitespace for the first line of the month
        Firstline+= "    ";//whitespace
    }

    int currentWeekDay=monthstartweekday;
    int currentMonthDay= 1;  
    while(currentWeekDay<7){ /// printing out the days for the first line
        
        Firstline+= " "+ to_string(currentMonthDay)+"  " ;    
        currentWeekDay++;
        currentMonthDay++;
        }
    cout << Firstline<< endl;
    
    while(currentMonthDay<=NumberOfDaysInMonth(monthname)){ // prints each week of the month
      
                string line="";
        currentWeekDay=0;
        while (currentWeekDay <7){ //printing out single week 
            if( currentMonthDay > NumberOfDaysInMonth(monthname)){
                break;
            }
            if(currentMonthDay<10){
                line+= "  ";
            }else{
                line+=" ";
            }



            line+= to_string(currentMonthDay)+ " ";
            
            currentWeekDay++;
            currentMonthDay++;


        }
        cout << line << endl;
        
            /* code */
        
        
    }

}
