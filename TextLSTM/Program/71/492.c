int main () {
    int n, nian, yue1, yue2, i, j;
    int ti, sum;
    int yue [11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &nian, &yue1, &yue2);
        if (yue1 > yue2) {
            ti = yue2;
            yue2 = yue1;
            yue1 = ti;
        }
        sum = 0;
        for (j = yue1; j < yue2; j++) {
            sum += yue[j - 1];
        }
        if ((yue1 <= 2) && (yue2 >= 3)) {
            if ((nian % 4 == 0) && (nian % 100 != 0) || (nian % 400 == 0)) {
                sum++;
            }
        }
        if (sum % 7 == 0) {
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
    return 0;
}

