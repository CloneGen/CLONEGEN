int main () {
    char a [80], b [80];
    int i;
    cin.getline (a, 80);
    cin.getline (b, 80);
    for (i = 0; i < 80; i++) {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] = a[i] + 32;
    }
    for (i = 0; i < 80; i++) {
        if (b[i] >= 65 && b[i] <= 90)
            b[i] = b[i] + 32;
    }
    if (strcmp (a, b) == 0)
        cout << "=" << endl;
    else if (strcmp (a, b) > 0)
        cout << ">" << endl;
    else
        cout << "<" << endl;
    return 0;
}

