int main () {
    int num, i, j = 0, chushu;
    cin >> num;
    for (i = 1; i < 4; i++) {
        chushu = 2 * i + 1;
        if (num % chushu == 0) {
            if (j > 0)
                cout << " ";
            cout << chushu;
            j++;
        }
    }
    if (j == 0)
        cout << "n";
    cout << endl;
    return 0;
}

