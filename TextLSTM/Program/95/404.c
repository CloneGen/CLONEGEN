int main () {
    int i, len1, len2, flag;
    char a [80], b [80];
    cin.getline (a, 80);
    cin.getline (b, 80);
    len1 = strlen (a);
    len2 = strlen (b);
    for (i = 0; i < len1; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    }
    for (i = 0; i < len2; i++) {
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }
    for (i = 0; i < len1 && i < len2; i++) {
        flag = 0;
        if (a[i] == b[i]) {
            continue;
        }
        else if (a[i] > b[i]) {
            flag = 1;
            break;
        }
        else {
            flag = 2;
            break;
        }
    }
    if (flag == 0)
        cout << '=' << endl;
    if (flag == 1)
        cout << '>' << endl;
    if (flag == 2)
        cout << '<' << endl;
    return 0;
}

