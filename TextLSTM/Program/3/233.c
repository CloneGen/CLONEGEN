int a [999999];

int cmp (const  void *a, const  void *b) {
    return (*(int*) a) - (*(int*) b);
}

int main () {
    int n;
    int k;
    scanf ("%d%d", &n, &k);
    int i, j;
    if (n == 0) {
        cout << "NO" << endl;
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    stable_sort (a, a + n);
    i = 0;
    j = n - 1;
    while (i != j) {
        if (a[i] + a[j] > k) {
            j--;
            continue;
        }
        else if (a[i] + a[j] < k) {
            i++;
            continue;
        }
        else {
            printf ("%s", "yes");
            return 0;
        }
    }
    printf ("%s", "no");
    return 0;
}

