int main () {
    int yu, i, j, n, p;
    char num [200], shang [200];
    cin.get (num, 200);
    n = strlen (num);
    yu = 0;
    p = 200;
    for (i = 0; i < n; i++) {
        shang[i] = (yu * 10 + num[i] - '0') / 13 + '0';
        yu = (yu * 10 + num[i] - '0') % 13;
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
        for (j = i; j < n; j++)
            cout << shang[j];
    }
    cout << endl << yu << endl;
    return 0;
}

