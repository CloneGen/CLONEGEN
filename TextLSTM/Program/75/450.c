int main () {
    int arrival [1000], depature [1000], i = 0, j, count, max = 0;
    while (true) {
        cin >> arrival[i];
        i++;
        if (cin.get () != ',')
            break;
    }
    int total = i;
    i = 0;
    while (true) {
        cin >> depature[i];
        i++;
        if (cin.get () != ',')
            break;
    }
    for (i = 0; i < 1000; i++) {
        count = 0;
        for (j = 0; j < total; j++)
            if (i >= arrival[j] && i < depature[j])
                count++;
        if (count > max)
            max = count;
    }
    cout << total << ' ' << max;
    return 0;
}

