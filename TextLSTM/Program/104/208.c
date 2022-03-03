int main () {
    int a, b, i = 0, j = 0, k;
    int a_line [20], b_line [20];
    cin >> a >> b;
    while (a != 0) {
        a_line[i] = a;
        a = a / 2;
        i++;
    }
    while (b != 0) {
        b_line[j] = b;
        b = b / 2;
        j++;
    }
    if (i > j) {
        for (k = 0; k < j; k++)
            if (a_line[i - j + k] == b_line[k]) {
                cout << b_line[k];
                break;
            }
    }
    else
        for (k = 0; k < j; k++)
            if (b_line[j - i + k] == a_line[k]) {
                cout << a_line[k];
                break;
            }
    return 0;
}

