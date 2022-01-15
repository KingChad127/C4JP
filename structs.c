#include <stdio.h>
#include "stdlib.h"

// static: the address of this constant
// will not change throughout the runtime of the program
// static const char *STUDENT_NAME = "Abhinav";

struct student {
    char *name;
    int id;
    int credit_hours;
    double gpa;
    long double loan_outstanding;
};

void student_report(struct student *s) {
    printf("%s (%d) :: Hours: %d, GPA: %f, Loan: %Lf",
           s->name, s->id, s->credit_hours, s->gpa, s->loan_outstanding);
}

int main() {
    struct student student_one = {
            .name = "Abhinav",
            .id = 12345,
            .credit_hours = 40,
            .gpa = 4.0,
            .loan_outstanding = 12345678.89
    };

    student_report(&student_one);
    return EXIT_SUCCESS;
}