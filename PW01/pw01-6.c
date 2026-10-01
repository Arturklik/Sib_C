#include <stdio.h>

#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR 3600

int main(void) {
    int age_years = 18;

    int days = age_years * DAYS_PER_YEAR;
    int hours = days * HOURS_PER_DAY;
    int ticks = hours * SECONDS_PER_HOUR;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", ticks, hours, days, age_years);

    return 0;
}
