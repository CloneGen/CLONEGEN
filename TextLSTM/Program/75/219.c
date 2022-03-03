int main () {
    int xi [1000], yi [1000], time [1000] = {0};
    int i = 0, max = 0, j = 0;
    char c;
    int temp;
    do {
        cin >> xi[i];
        i++;
    }
    while ((c = cin.get ()) == ',');
    do {
        cin >> yi[j];
        j++;
    }
    while ((c = cin.get ()) == ',');
    for (int j = 0;
    j < i; j++) {
        for (int k = xi[j];
        k < yi[j]; k++) {
            time[k] += 1;
        }
    }
    for (int j = 0;
    j < 1000; j++) {
        if (time[j] > max)
            max = time[j];
    }
    cout << i << " " << max;
    return 0;
}

