#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include "deposit.h"

//Check function conditions

CTEST(cond, test1){
    ASSERT_EQUAL(0,conditions(-1,1000));
}
CTEST(cond, test2){
    ASSERT_EQUAL(0,conditions(1,365));
}
CTEST(cond, test3){
    ASSERT_EQUAL(0,conditions(1000,366));
}
CTEST(cond, test4){
    ASSERT_EQUAL(1,conditions(1500,365));
}
CTEST(cond, test5){
    ASSERT_EQUAL(1,conditions(1000,300));
}
CTEST(cond, test6){
    ASSERT_EQUAL(0,conditions(1000,-6));
}

//Check function calc

CTEST(calct, test1){
    ASSERT_EQUAL(900,calc(1000,1));
}
CTEST(calct, test2){
    ASSERT_EQUAL(1020,calc(1000,31));
}
CTEST(calct, test3){
    ASSERT_EQUAL(1060,calc(1000,121));
}
CTEST(calct, test4){
    ASSERT_EQUAL(1120,calc(1000,241));
}







