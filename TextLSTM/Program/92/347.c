int mycompare (const  void *a, const  void *b);

int main () {
    int n, i, j, s, t, m, k;
    int tian [1001], qi [1001];
    while (cin >> n) {
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            cin >> tian[i];
        for (i = 0; i < n; i++)
            cin >> qi[i];
        qsort (tian, n, sizeof (int), mycompare);
        qsort (qi, n, sizeof (int), mycompare);
        s = 0;
        for (i = 0, m = 0, j = n - 1, k = n - 1; i <= k;) {
            if (tian[m] > qi[i]) {
                s++;
                m++;
                i++;
            }
            else if (tian[j] > qi[k]) {
                s++;
                j--;
                k--;
            }
            else {
                if (tian[j] < qi[i])
                    s--;
                j--;
                i++;
            }
        }
        cout << s * 200 << endl;
    }
    return 0;
}

int mycompare (const  void *a, const  void *b) {
    return *(int*) b - *(int*) a;
}

