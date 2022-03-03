int main () {
    int n, b [91] = {0}, i, k, counter = 0, temp;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> temp;
        for (k = 0; k < 91; k++) {
            if (b[k] == temp)
                break;
        }
        if (k >= 91) {
            b[counter] = temp;
            counter++;
        }
    }
    for (k = 0; k < counter - 1; k++) {
        cout << b[k] << " ";
    }
    cout << b[counter - 1] << endl;
    return 0;
}

