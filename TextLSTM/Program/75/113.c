int main () {
    char cx [10000], cy [10000];
    int ix [10000] = {0}, i, j, iy [10000] = {0}, people [1000] = {0}, lenx, leny, p = 1, max = 0, maxy = 0, num = 1;
    cin >> cx >> cy;
    for (i = 0; cx[i] != '\0'; i++) {
        if (cx[i] == ',') {
            num++;
        }
    }
    lenx = strlen (cx);
    leny = strlen (cy);
    for (i = lenx - 1, j = 0; i >= 0; i--) {
        if (cx[i] != ',') {
            ix[j] += (cx[i] - '0') * p;
            p *= 10;
        }
        else {
            j++;
            p = 1;
        }
    }
    for (i = leny - 1, j = 0, p = 1; i >= 0; i--) {
        if (cy[i] != ',') {
            iy[j] += (cy[i] - '0') * p;
            p *= 10;
        }
        else {
            j++;
            p = 1;
        }
        if (iy[j] > maxy) {
            maxy = iy[j];
        }
    }
    for (i = 0; i < num; i++) {
        for (j = ix[i]; j < iy[i]; j++) {
            people[j]++;
        }
    }
    for (i = 0; i <= maxy; i++) {
        if (people[i] > max) {
            max = people[i];
        }
    }
    cout << num << " " << max;
    return 0;
}

