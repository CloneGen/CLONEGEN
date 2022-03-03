int main () {
    int n;
    struct  dis {
        int x;
        int y;
        double dis;
    }
    a [2000];
    double num [2000] [2];
    double max = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> num[i][0] >> num[i][1];
    }
    int t = 1;
    for (int i = 1;
    i <= n; i++) {
        for (int j = i;
        j <= n; j++) {
            a[t].x = i;
            a[t].y = j;
            a[t].dis = sqrt ((num[i][0] - num[j][0]) * (num[i][0] - num[j][0]) + (num[i][1] - num[j][1]) * (num[i][1] - num[j][1]));
            t++;
        }
    }
    for (int i = 1;
    i < n * n; i++) {
        if (a[i].dis >= max)
            max = a[i].dis;
    }
    printf ("%.4f\n", max);
    return 0;
}

