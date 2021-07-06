#include <iostream>
using namespace std;

#include "year.h"
year::year( int day){
    for(int i=0; i < 12; i++){
        
         monthlist[i].MonthInitialize(i+1,day);
     }


}