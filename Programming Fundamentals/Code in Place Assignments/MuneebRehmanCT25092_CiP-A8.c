#include <stdio.h>

int main(void) {
    float marks[5][4][3];
    float term_avg[5][3];
    float overall_avg[5];
    int students = 5, subjects = 4, terms = 3;

    for (int i = 0; i < students; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (int t = 0; t < terms; t++) {
            printf("  Term %d:\n", t + 1);
            for (int s = 0; s < subjects; s++) {
                printf("    Subject %d: ", s + 1);
                scanf("%f", &marks[i][s][t]);
            }
        }
    }

    for (int i = 0; i < students; i++) {
        float total = 0;
        for (int t = 0; t < terms; t++) {
            float term_total = 0;
            for (int s = 0; s < subjects; s++) {
                term_total += marks[i][s][t];
            }
            term_avg[i][t] = term_total / subjects;
            total += term_total;
        }
        overall_avg[i] = total / (subjects * terms);
    }

    int top_student = 0;
    float highest = overall_avg[0];
    for (int i = 1; i < students; i++) {
        if (overall_avg[i] > highest) {
            highest = overall_avg[i];
            top_student = i;
        }
    }

    int best_term = 0;
    float best_term_avg = term_avg[top_student][0];
    for (int t = 1; t < terms; t++) {
        if (term_avg[top_student][t] > best_term_avg) {
            best_term_avg = term_avg[top_student][t];
            best_term = t;
        }
    }

    printf("\n=== Results ===\n");
    for (int i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int t = 0; t < terms; t++) {
            printf("  Term %d average: %.2f\n", t + 1, term_avg[i][t]);
        }
        printf("  Overall average: %.2f\n", overall_avg[i]);
    }

    printf("\nTop Scorer: Student %d\n", top_student + 1);
    printf("Highest Overall Average: %.2f\n", highest);
    printf("Best Term: Term %d (Average: %.2f)\n", best_term + 1, best_term_avg);

    return 0;
}
