#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int days_in_month(int month, int year) {
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2 && is_leap_year(year)) {
        return 29;
    }
    return days_in_months[month - 1];
}

void calculate_days_lived(Date birth_date, Date current_date) {
    int total_days = 0;

    // Calculate days from birth date to the end of the birth year
    for(int i = birth_date.month; i <= 12; i++) {
        if (i == birth_date.month) {
            total_days += days_in_month(i, birth_date.year) - birth_date.day;
        } else {
            total_days += days_in_month(i, birth_date.year);
        }
    }

    // Calculate days from the start of the current year to the current date
    for(int i = 1; i < current_date.month; i++) {
        total_days += days_in_month(i, current_date.year);
    }
    total_days += current_date.day;

    // Calculate days for the years in between
    for(int i = birth_date.year + 1; i < current_date.year; i++) {
        if (is_leap_year(i)) {
            total_days += 366;
        } else {
            total_days += 365;
        }
    }

    printf("You have lived %d days.\n", total_days);
}

int main() {
    Date birth_date, current_date;

    printf("Enter your birth day: ");
    scanf("%d", &birth_date.day);

    printf("Enter your birth month: ");
    scanf("%d", &birth_date.month);

    printf("Enter your birth year: ");
    scanf("%d", &birth_date.year);

    printf("Enter the current day: ");
    scanf("%d", &current_date.day);

    printf("Enter the current month: ");
    scanf("%d", &current_date.month);

    printf("Enter the current year: ");
    scanf("%d", &current_date.year);

    calculate_days_lived(birth_date, current_date);

    return 0;
}
