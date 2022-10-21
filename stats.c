#include "stats.h"
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}
void emailAlerter(int x)
{
    if(x>100)
    {
     emailAlertCallCount++;
    }
}
void ledAlerter(int y)
{
    if(y>100)
    {
     ledAlertCallCount++;
    }
}


