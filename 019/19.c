#include <stdio.h>

int is_leap(int year) {
    if ((year % 100 == 0) && (year % 400 != 0)) return 0;
    else if (year % 4 == 0) return 1;
    else return 0;
}

int get_day_of_month(int year, int doy) {
    int my[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int i = 0;

    my[1] = is_leap(year) ? 29 : 28;

    for(i = 0; i < 12; i++) {
        if (doy <= my[i]) {
            return doy;
        }

        doy -= my[i];
    }

    return doy;
}


int main(int argc, char ** argv) {

    int i, j, days, sundays = 0, dow = 2;

    for(i = 1901; i <= 2000; i++) {
        
        if (is_leap(i)) 
            days = 366;
        else 
            days = 365;

        for(j = 1; j <= days; j++) {
            int dom = get_day_of_month(i, j);
            if (dow == 7 && dom == 1) 
                sundays++;

            if (++dow > 7) 
                dow = 1;
        }
    }

    printf("%d\n", sundays);

}
