int main () {
    int z, q, s, l, i, j, order [5], temp;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q)) {
                        order[1] = z;
                        order[2] = q;
                        order[3] = s;
                        order[4] = l;
                        break;
                    }
                }
            }
        }
    }
    z = order[1];
    q = order[2];
    s = order[3];
    l = order[4];
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= (4 - j); i++) {
            if (order[i] < order[i + 1]) {
                temp = order[i];
                order[i] = order[i + 1];
                order[i + 1] = temp;
            }
        }
    }
    for (i = 1; i <= 4; i++) {
        if (order[i] == z)
            cout << "z " << 10 * order[i] << endl;
        if (order[i] == q)
            cout << "q " << 10 * order[i] << endl;
        if (order[i] == s)
            cout << "s " << 10 * order[i] << endl;
        if (order[i] == l)
            cout << "l " << 10 * order[i] << endl;
    }
    return 0;
}

