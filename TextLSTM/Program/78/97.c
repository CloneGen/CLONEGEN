int main () {
    int a [4], ta, i, j;
    char name [4] = {'z', 'q', 's', 'l'}, tn;
    for (a[0] = 1; a[0] <= 5; a[0]++)
        for (a[1] = 1; a[1] <= 5; a[1]++)
            for (a[2] = 1; a[2] <= 5; a[2]++)
                for (a[3] = 1; a[3] <= 5; a[3]++)
                    if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3] && ((a[0] + a[1]) == (a[2] + a[3])) && ((a[0] + a[3]) > (a[1] + a[2])) && ((a[0] + a[2]) < a[1])) {
                        for (i = 0; i < 3; i++)
                            for (j = 0; j < 3 - i; j++)
                                if (a[j] < a[j + 1]) {
                                    ta = a[j];
                                    a[j] = a[j + 1];
                                    a[j + 1] = ta;
                                    tn = name[j];
                                    name[j] = name[j + 1];
                                    name[j + 1] = tn;
                                }
                        for (i = 0; i < 4; i++)
                            cout << name[i] << " " << a[i] << "0" << endl;
                    }
    return 0;
}

