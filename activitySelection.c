#include <stdio.h>

typedef struct {
    int id;
    int start;
    int finish;
} Activity;

void sortActivities(Activity a[], int n) {     //bubble sort is used here and time complexity depends on the sorting algo
    int i, j;                                   // bubble sort -> O(n^2), if other sorting then -> O(nlogn)
    Activity temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j].finish > a[j + 1].finish) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void activitySelection(Activity a[], int n) {
    sortActivities(a, n);

    printf("\nSelected Activities:\n");

    int last = 0;
    printf("A%d ", a[last].id);

    for (int i = 1; i < n; i++) {
        if (a[i].start >= a[last].finish) {
            printf("A%d ", a[i].id);
            last = i;
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    Activity a[n];

    for (int i = 0; i < n; i++) {
        a[i].id = i + 1;

        printf("Enter start and finish time of A%d: ", i + 1);
        scanf("%d %d", &a[i].start, &a[i].finish);
    }

    activitySelection(a, n);

    return 0;
}