int Min (int array []);
int Max (int array []);
int i, j, MaxTime, MinTime, n = 1, arrive [1000], leave [1000];

int main () {
    int k, max = 0;
    char c;
    int count [1000] = {0};
    cin >> arrive[1];
    while ((c = getchar ()) == ',') {
        cin >> arrive[++n];
    }
    for (i = 1; i <= n; i++)
        count[i] = 0;
    cin >> leave[1];
    for (i = 2; i <= n; i++) {
        cin >> c >> leave[i];
    }
    for (i = 1; i <= n; i++) {
        MinTime = Min (arrive);
    }
    for (j = 1; j <= n; j++) {
        MaxTime = Max (leave);
    }
    for (k = MinTime; k <= MaxTime; k++) {
        for (i = 1; i <= n; i++) {
            if (k >= arrive[i] && k < leave[i])
                count[k]++;
        }
    }
    for (i = MinTime; i <= MaxTime; i++) {
        if (count[i] > max)
            max = count[i];
    }
    cout << n << ' ' << max;
    return 0;
}

int Min (int array []) {
    int min = arrive[1];
    for (i = 2; i <= n; i++) {
        if (arrive[i] < min)
            min = arrive[i];
    }
    MinTime = min;
    return MinTime;
}

int Max (int array []) {
    int max = 0;
    for (j = 1; j <= n; j++) {
        if (leave[j] > max)
            max = leave[j];
    }
    MaxTime = max;
    return MaxTime;
}

