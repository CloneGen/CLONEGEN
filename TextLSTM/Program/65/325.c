int main () {
    int n, i, s = 0;
    int a [200], b [200];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &a[i], &b[i]);
        if ((a[i] == 0 && b[i] == 1) || (a[i] == 1 && b[i] == 2) || (a[i] == 2 && b[i] == 0)) {
            s = s + 1;
        }
        else if (a[i] == b[i]) {
            s = s + 0;
        }
        else {
            s = s - 1;
        }
    }
    if (s > 0) {
        printf ("A");
    }
    else if (s == 0) {
        printf ("Tie");
    }
    else {
        printf ("B");
    }
    return 0;
}

