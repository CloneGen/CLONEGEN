int main () {
    int n, i, j, x, y;
    struct  student {
        int score, num;
    }
    a [100000];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i].num >> x >> y;
        a[i].score = x + y;
    }
    a[0] = a[1];
    for (i = 1; i <= 3; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i].score < a[j].score) {
                a[0] = a[i];
                a[i] = a[j];
                a[j] = a[0];
            }
    cout << a[1].num << " " << a[1].score << endl << a[2].num << " " << a[2].score << endl << a[3].num << " " << a[3].score;
}

