int main () {
    char x [100];
    int i = 0, spot;
    cin.getline (x, 100, '\n');
    while (x[i] != 0) {
        if (x[i] == ' ' && x[i + 1] == ' ') {
            spot = i;
            while (x[i + 1] != 0) {
                x[i + 1] = x[i + 2];
                i++;
            };
            i = spot - 1;
        }
        i++;
    };
    i = 0;
    while (x[i] != 0) {
        cout << x[i];
        i++;
    }
    return 0;
}

