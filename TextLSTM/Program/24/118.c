int main () {
    int min = INT_MAX, max = INT_MIN, n1, n2, i, n = 0;
    char a [201] = {'\0'};
    cin.getline (a, 201, '\n');
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' ' && a[i] != ',')
            break;
    }
    for (; a[i] != '\0'; i++) {
        if (a[i] == ' ' || a[i] == ',') {
            min = n;
            max = n;
            n1 = i;
            n2 = i;
            n = 0;
            break;
        }
        else
            n += 1;
    }
    if (a[i] != 0)
        i++;
    for (; a[i] != '\0'; i++) {
        if ((a[i] == ' ' || a[i] == ',') && n != 0) {
            if (n > max) {
                max = n;
                n2 = i;
            }
            if (n < min) {
                min = n;
                n1 = i;
            }
            n = 0;
        }
        else if ((a[i] == ' ' || a[i] == ',') && n == 0)
            continue;
        else
            n += 1;
    }
    if (n != 0) {
        if (n > max) {
            max = n;
            n2 = i;
        }
        if (n < min) {
            min = n;
            n1 = i;
        }
    }
    for (i = n2 - max; i < n2; i++)
        cout << a[i];
    cout << endl;
    for (i = n1 - min; i < n1; i++)
        cout << a[i];
    return 0;
}

