int main () {
    char dashu [100], shang [100];
    int yu, i, n, p;
    cin >> dashu;
    n = strlen (dashu);
    yu = 0;
    p = 200;
    for (i = 0; i < n; i++) {
        shang[i] = (yu * 10 + dashu[i] - '0') / 13 + '0';
        yu = (yu * 10 + dashu[i] - '0') - 13 * (shang[i] - '0');
    }
    for (i = 0; i < n; i++) {
        if (shang[i] != '0') {
            p = i;
            break;
        }
    }
    if (p == 200)
        cout << "0";
    else {
        for (i = p; i < n; i++)
            cout << shang[i];
    }
    cout << endl << yu << endl;
    return 0;
}

