int main () {
    char sen [500];
    int num [500], dis [500], maxdis = 0, k = 1;
    int i, j;
    cin >> sen;
    int n = 0;
    for (i = 0; i <= strlen (sen); i++) {
        if (sen[i] == sen[i + 1]) {
            n = n + 1;
            num[n] = i;
            for (j = 1; j <= i; j++) {
                if (sen[i - j] != sen[i + 1 + j])
                    break;
            }
            dis[n] = j;
            if (dis[n] > maxdis)
                maxdis = dis[n];
        }
        else
            continue;
    }
    do {
        for (i = 1; i <= n; i++) {
            if (dis[i] >= k) {
                for (j = num[i] + 1 - k; j <= num[i] + k - 1; j++)
                    cout << sen[j];
                cout << sen[j] << endl;
            }
        }
        k = k + 1;
    }
    while (k <= maxdis);
    return 0;
}

