int main () {
    int t1 [1000], t2 [1000];
    char a;
    int i, g = 0, t, num, max = 0;
    for (i = 0;; i++) {
        cin >> t1[i];
        a = cin.get ();
        if (a == ',')
            g++;
        if (a == '\n')
            break;
    }
    for (i = 0;; i++) {
        cin >> t2[i];
        a = cin.get ();
        if (a == '\n')
            break;
    }
    for (t = 1; t <= 1000; t++) {
        num = 0;
        for (i = 0; i < g + 1; i++) {
            if (t >= t1[i] && t < t2[i]) {
                num++;
                if (num > max)
                    max = num;
            }
        }
    }
    cout << g + 1 << " " << max << endl;
    return 0;
}

