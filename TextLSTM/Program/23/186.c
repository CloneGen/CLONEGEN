int main () {
    char a [100];
    signed int num = 1, b [100], total = 0;
    for (int i = 0;
    i < 100; i++) {
        cin.get (a[i]);
        if (a[i] == '\n')
            break;
        total++;
        if (a[i] == ' ') {
            b[num] = i;
            num++;
        }
    }
    b[0] = -1;
    b[num] = total;
    for (int i = num - 1;
    i >= 0; i--) {
        for (int j = b[i] + 1;
        j < b[i + 1]; j++) {
            cout << a[j];
        }
        if (i != 0)
            cout << " ";
    }
    return 0;
}

