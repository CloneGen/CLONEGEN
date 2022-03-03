int main () {
    int i = 0, j = 0, p, come [1000], go [1000], time [1001] = {0}, line = 1, tmax = 0, pmax = 0;
    char c;
    while (1) {
        if (line == 1) {
            cin >> come[i++];
            c = cin.get ();
            if (c == '\n')
                line++;
        }
        else if (line == 2) {
            cin >> go[j++];
            c = cin.get ();
            if (go[j - 1] > tmax) {
                tmax = go[j - 1];
            }
            if (c == '\n')
                line++;
        }
        else
            break;
    }
    p = i;
    for (i = 0; i < p; i++) {
        for (j = come[i]; j < go[i]; j++) {
            time[j]++;
        }
    }
    for (i = 0; i <= tmax; i++) {
        if (time[i] > pmax) {
            pmax = time[i];
        }
    }
    cout << p << " " << pmax << endl;
    return 0;
}

