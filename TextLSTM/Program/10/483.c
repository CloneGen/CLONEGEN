int main () {
    int n;
    scanf ("%d", &n);
    int num_lanjie [25];
    int input [25];
    for (int i = 0;
    i <= n - 1; i++) {
        if (i == 0) {
            scanf ("%d", &input[i]);
        }
        else {
            scanf (" %d", &input[i]);
        }
    }
    num_lanjie[n - 1] = 1;
    for (int i = n - 2;
    i >= 0; i--) {
        int max = 0;
        for (int j = n - 1;
        j > i; j--) {
            if (input[i] >= input[j] && max < num_lanjie[j]) {
                max = num_lanjie[j];
            }
        }
        num_lanjie[i] = max + 1;
    }
    int max = 0;
    for (int i = 0;
    i <= n - 1; i++) {
        max = max > num_lanjie[i] ? max : num_lanjie[i];
    }
    printf ("%d", max);
    return 0;
}

