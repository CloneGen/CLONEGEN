int main () {
    int pause [21], skip, m, time [21], i, n, counter = 0;
    cin >> n;
    while (counter < n && cin >> m) {
        counter++;
        for (i = 1; i <= m; i++) {
            cin >> pause[i];
        }
        for (i = 1, skip = 60 - 3 * m; i <= m; i++) {
            time[i] = pause[i] + 3 * i;
            if (time[i] >= 63) {
                skip = pause[i] + 63 - time[i];
                break;
            }
            else if (time[i] >= 60) {
                skip = pause[i];
                break;
            }
        }
        cout << skip << endl;
    }
    return 0;
}

