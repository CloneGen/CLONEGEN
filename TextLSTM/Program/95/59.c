int main () {
    char a [80], b [80];
    cin.getline (a, 80);
    cin.getline (b, 80);
    for (int i = 0;
    i < 80; i++) {
        if (a[i] > 96)
            a[i] = a[i] - 32;
        if (b[i] > 96)
            b[i] = b[i] - 32;
    }
    for (int i = 0;
    i < 80; i++) {
        if (a[i] > b[i]) {
            cout << ">" << endl;
            break;
        }
        if (a[i] < b[i]) {
            cout << "<" << endl;
            break;
        }
        if (a[i] == '\0' && b[i] == '\0') {
            cout << "=" << endl;
            break;
        }
    }
    return 0;
}

