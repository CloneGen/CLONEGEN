int main () {
    int arrive [1001], leave [1001], time [1000] = {0};
    int peo, max, j, k;
    char c;
    for (peo = 1;; peo++) {
        cin >> arrive[peo];
        c = cin.get ();
        if (c == '\n')
            break;
    }
    for (peo = 1;; peo++) {
        cin >> leave[peo];
        c = cin.get ();
        if (c == '\n')
            break;
    }
    cout << peo << " ";
    for (k = 1; k <= peo; k++)
        for (j = arrive[k]; j < leave[k]; j++)
            time[j]++;
    max = time[0];
    for (k = 0; k < 1000; k++)
        if (time[k] > max)
            max = time[k];
    cout << max << endl;
    return 0;
}

