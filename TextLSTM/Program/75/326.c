int main () {
    int T [1000] = {0}, x [1000] = {0}, y [1000] = {0}, i = 0, n = 0, k = 0, MostPeople = 0, People = 0;
    ;
    char test;
    while (1) {
        cin >> x[i];
        test = getchar ();
        People++;
        i++;
        if (test == '\n')
            break;
    }
    i = 0;
    while (1) {
        cin >> y[i];
        test = getchar ();
        i++;
        if (test == '\n')
            break;
    }
    for (i = 0; i < People; i++) {
        k = 0;
        while (k < (y[i] - x[i])) {
            T[x[i] + k]++;
            k++;
        }
    }
    for (i = 0; i < 1000; i++) {
        if (T[i] > MostPeople)
            MostPeople = T[i];
    }
    cout << People << ' ' << MostPeople << endl;
    return 0;
}

