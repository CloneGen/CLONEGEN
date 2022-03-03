int main () {
    int n, i, j;
    scanf ("%d", &n);
    int order [10000] = {0};
    for (i = 0; i < n; i++) {
        scanf ("%d", &order[i]);
    }
    for (j = n - 1; j > -1; j--) {
        if (j > 0) {
            printf ("%d ", order[j]);
        }
        else {
            printf ("%d", order[j]);
        }
    }
    return 0;
}

