int main () {
    int i;
    char a [100], b [100];
    cin.getline (a, 81);
    cin.getline (b, 81);
    for (i = 0; i < 81; i++) {
        if (a[i] <= 'Z' && a[i] >= 'A')
            a[i] += 32;
        else
            continue;
    }
    for (i = 0; i < 81; i++) {
        if (b[i] <= 'Z' && b[i] >= 'A')
            b[i] += 32;
        else
            continue;
    }
    if (strcmp (a, b) > 0)
        cout << ">" << endl;
    else if (strcmp (a, b) == 0)
        cout << "=" << endl;
    else if (strcmp (a, b) < 0)
        cout << "<" << endl;
    return 0;
}

