int main () {
    int iNumber, i, iCount_can = 0, iCount_blank_space = 0;
    cin >> iNumber;
    for (i = 3; i < 8; i++, i++) {
        if (iNumber % i == 0) {
            if (iCount_blank_space)
                cout << ' ';
            cout << i;
            iCount_can++;
            iCount_blank_space = 1;
        }
    }
    if (iCount_can == 0)
        cout << 'n' << endl;
    return 0;
}

