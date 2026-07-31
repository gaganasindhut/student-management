#include "student.h"
#include <string.h>

void sort_by_grade_then_name(void) {
    int i, j;
    Student temp;

    for (i = 0; i < total_students - 1; i++) {
        for (j = 0; j < total_students - i - 1; j++) {

            if (students[j].grade > students[j + 1].grade ||
               (students[j].grade == students[j + 1].grade &&
                strcmp(students[j].name, students[j + 1].name) > 0)) {

                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
                }
        }
    }
}