int main () {
    int i, t;
    char a [82], b [82];
    cin.getline (a, 82);
    cin.getline (b, 82);
    for (i = 0; i < 82; i++) {
        t = (int) a[i];
        if ((t <= 90) && (t >= 65)) {
            t = t + 32;
            a[i] = (char) t;
        }
    }
    for (i = 0; i < 82; i++) {
        t = (int) b[i];
        if ((t <= 90) && (t >= 65)) {
            t = t + 32;
            b[i] = (char) t;
        }
    }
    if (strcmp (a, b) > 0)
        cout << ">" << endl;
    else if (strcmp (a, b) == 0)
        cout << "=" << endl;
    else if (strcmp (a, b) < 0)
        cout << "<" << endl;
    return 0;
}

