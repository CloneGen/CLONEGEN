int main () {
    char a [100] = {0}, b [100] = {0};
    cin.getline (a, 100, ' ');
    cin.getline (b, 100);
    int c [53] = {0}, l1, l2;
    l1 = strlen (a);
    l2 = strlen (b);
    for (int i = 0;
    i < l1; i++) {
        if (a[i] >= 97 && a[i] <= 122)
            c[a[i] - 96]++;
        if (a[i] >= 65 && a[i] <= 90)
            c[a[i] - 38]++;
    }
    for (int i = 0;
    i < l2; i++) {
        if (b[i] >= 97 && b[i] <= 122)
            c[b[i] - 96]--;
        if (b[i] >= 65 && b[i] <= 90)
            c[b[i] - 38]--;
    }
    int s = 0;
    for (int i = 0;
    i <= 52; i++) {
        if (c[i] == 0)
            s = 0;
        else {
            s = 1;
            break;
        }
    }
    if (s == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

