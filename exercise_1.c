#include <stdio.h>

struct Person {
    char first_name[10];
    char last_name[10];
    char dob_month[10];
    int dob_year;
    int dob_day;
    unsigned long mobile;
};

int main() {
    struct Person p1 = {"Dylan", "Fantauzzo", "September", 1998, 12, 4917622860944};
    printf("First Name: %s\n", p1.first_name);
    printf("Last Name: %s\n", p1.last_name);
    printf("DOB: %s, %d, %d\n", p1.dob_month, p1.dob_day, p1.dob_year);
    printf("Mobile: %d", p1.mobile);
    return 0;
}