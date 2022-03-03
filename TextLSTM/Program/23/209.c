int main () {
    int i, k;
    char letter [105] [55], a;
    k = 0;
    while (cin >> letter[k]) {
        cin.get (a);
        if (a == '\n')
            break;
        k += 1;
    }
    cout << letter[k];
    for (i = k - 1; i >= 0; i--)
        cout << ' ' << letter[i];
    cout << endl;
    return 0;
}

