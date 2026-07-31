#include "student.h"

int is_student_array_sorted(void) {
    int i;

    for (i = 0; i < total_students - 1; i++) {
        if (students[i].id > students[i + 1].id) {
            return 0;
        }
    }

    return 1;
}