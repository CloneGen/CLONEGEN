int main () {
    int i, j, n, num [300], temp, flag = 0;
    scanf ("%d", &n);
    scanf ("%d", &num[0]);
    for (i = 1; i < n; i++) {
        scanf ("%d", &temp);
        for (j = 0; j < i; j++) {
            if (temp == num[j]) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            i--;
            n--;
        }
        else {
            num[i] = temp;
        }
        flag = 0;
    }
    for (i = 0; i < n - 1; i++) {
        printf ("%d", num[i]);
        printf (",");
    }
    printf ("%d", num[n - 1]);
    return 0;
}

