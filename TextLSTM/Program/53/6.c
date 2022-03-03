int main () {
    int result [1000];
    int n, flag = 0;
    int k, i, index = 0, j;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &n);
        for (j = 0; j < index; j++) {
            if (result[j] == n) {
                flag = 1;
                break;
            }
        }
        if ((j == index) && (!flag)) {
            result[index] = n;
            index++;
        }
        flag = 0;
    }
    for (i = 0; i < index - 1; i++) {
        printf ("%d,", result[i]);
    }
    printf ("%d", result[index - 1]);
    return 0;
}

