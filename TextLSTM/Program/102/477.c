int main () {
    int n;
    cin >> n;
    char sex [100] [30];
    double high [100];
    for (int i = 1;
    i <= n; ++i)
        cin >> sex[i] >> high[i];
    for (int i = 1;
    i <= n; ++i) {
        for (int t = 1;
        t <= n; ++t) {
            double s;
            char c [30];
            if (high[t] > high[i]) {
                s = high[t];
                high[t] = high[i];
                high[i] = s;
                strcpy (c, sex[i]);
                strcpy (sex[i], sex[t]);
                strcpy (sex[t], c);
            }
        }
    }
    int step = 0;
    for (int i = 1;
    i <= n; ++i) {
        if (strcmp (sex[i], "female") == 0)
            continue;
        if (step != (n - 1)) {
            printf ("%.2f ", high[i]);
            step = step + 1;
        }
        else
            printf ("%.2f", high[i]);
    }
    for (int i = n;
    i >= 1; --i) {
        if (strcmp (sex[i], "male") == 0)
            continue;
        if (step != (n - 1)) {
            printf ("%.2f ", high[i]);
            step = step + 1;
        }
        else
            printf ("%.2f", high[i]);
    }
    return 0;
}

