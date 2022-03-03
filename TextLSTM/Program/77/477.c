int main () {
    char c, boy = 0;
    int n_person, n_pair;
    int sym [100] = {0}, pair [50] [2] = {0};
    for (int i = 0;
    i < 100; i++) {
        c = cin.get ();
        if (i == 1)
            boy = c;
        if (c == '\n') {
            n_person = i;
            n_pair = n_person / 2;
            break;
        }
        if (c == boy)
            sym[i] = 1;
        else
            sym[i] = -1;
    }
    for (int i0 = n_person - 1, p = n_pair - 1;
    i0 >= 0; i0--)
        if (sym[i0] == -1) {
            pair[p][1] = i0;
            for (int i1 = i0, sum = 0;
            i1 >= 0; i1--) {
                sum = sum + sym[i1];
                if (sum == 0) {
                    pair[p][0] = i1;
                    break;
                }
            }
            p--;
        }
    for (int p = 0;
    p < n_pair; p++)
        cout << pair[p][0] << ' ' << pair[p][1] << endl;
    return 0;
}

