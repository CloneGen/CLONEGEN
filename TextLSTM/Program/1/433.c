int geshu;

void yinshu (int num, int a) {
    int i;
    if (num == 1)
        geshu++;
    else {
        for (i = a; i <= num; i++) {
            if (num % i == 0) {
                yinshu (num / i, i);
            }
        }
    }
}

int main () {
    int shu, j, num1 [10000];
    cin >> shu;
    for (j = 0; j < shu; j++) {
        geshu = 0;
        cin >> num1[j];
        yinshu (num1[j], 2);
        cout << geshu << endl;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

