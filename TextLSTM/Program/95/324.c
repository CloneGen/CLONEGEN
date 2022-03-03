int main () {
    char a [80], b [80];
    int len1, len2, i;
    cin.getline (a, 80);
    len1 = strlen (a);
    cin.getline (b, 80);
    len2 = strlen (b);
    for (i = 0; i < len1; i++) {
        if (a[i] <= 'Z')
            a[i] = a[i] + 32;
        if (b[i] <= 'Z')
            b[i] = b[i] + 32;
        if (a[i] < b[i]) {
            cout << "<" << endl;
            break;
        }
        if (a[i] > b[i]) {
            cout << ">" << endl;
            break;
        }
    }
    if (i == len1)
        cout << "=" << endl;
    return 0;
}

