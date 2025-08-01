#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int *arr;
    int size;
    int capacity;
} Sequence;

// Initialize a dynamic sequence
void initSequence(Sequence *seq) {
    seq->capacity = 2;
    seq->size = 0;
    seq->arr = (int *)malloc(seq->capacity * sizeof(int));
}

// Append to sequence
void append(Sequence *seq, int value) {
    if (seq->size == seq->capacity) {
        seq->capacity *= 2;
        seq->arr = (int *)realloc(seq->arr, seq->capacity * sizeof(int));
    }
    seq->arr[seq->size++] = value;
}

// Get element from sequence
int get(Sequence *seq, int index) {
    return seq->arr[index];
}

int main() {
    int n, q;
    printf("Enter number of sequences and queries: ");
    scanf("%d %d", &n, &q);

    Sequence *seqList = (Sequence *)malloc(n * sizeof(Sequence));
    for (int i = 0; i < n; i++)
        initSequence(&seqList[i]);

    int lastAnswer = 0;

    printf("Enter queries (type x y):\n");
    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            append(&seqList[idx], y);
        } else if (type == 2) {
            int pos = y % seqList[idx].size;
            lastAnswer = get(&seqList[idx], pos);
            printf("%d\n", lastAnswer);
        }
    }

    // Free memory
    for (int i = 0; i < n; i++)
        free(seqList[i].arr);
    free(seqList);

    return 0;
}
