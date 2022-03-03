int main () {
    char c;
    int start [1000] = {0};
    int end [1000] = {0};
    int person [1000] = {0};
    int count = 0;
    while (1) {
        cin >> start[count];
        c = cin.get ();
        count++;
        if (c != ',') {
            break;
        }
    }
    for (int i = 0;
    i < count; i++) {
        if (i < count - 1) {
            cin >> end[i];
            cin >> c;
        }
        else {
            cin >> end[i];
        }
    }
    for (int i = 0;
    i < 1000; i++) {
        for (int j = start[i];
        j < end[i]; j++) {
            person[j]++;
        }
    }
    int max = 0;
    for (int i = 0;
    i < 1000; i++) {
        if (max < person[i]) {
            max = person[i];
        }
    }
    cout << count << " " << max << endl;
    return 0;
}

