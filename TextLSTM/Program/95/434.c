int main () {
    char a [2] [80];
    char c;
    int i, w1, w2, min;
    for (i = 0; (c = getchar ()) != '\n'; i++)
        a[0][i] = c;
    w1 = i;
    for (i = 0; (c = getchar ()) != '\n'; i++)
        a[1][i] = c;
    w2 = i;
    for (i = 0; i < w1; i++)
        if (a[0][i] >= 65 && a[0][i] <= 90)
            a[0][i] += 32;
    for (i = 0; i < w2; i++)
        if (a[1][i] >= 65 && a[1][i] <= 90)
            a[1][i] += 32;
    if (w1 <= w2)
        min = w1;
    else
        min = w2;
    for (i = 0; i < min; i++) {
        if (a[0][i] < a[1][i]) {
            cout << "<" << endl;
            break;
        }
        if (a[0][i] > a[1][i]) {
            cout << ">" << endl;
            break;
        }
        if (a[0][i] == a[1][i]) {
            if ((i == w1 - 1) && (i == w2 - 1))
                cout << "=" << endl;
            if ((i == w1 - 1) && (i < w2 - 1))
                cout << "<" << endl;
            if ((i == w2 - 1) && (i < w1 - 1))
                cout << ">" << endl;
            continue;
        }
    }
    return 0;
}

