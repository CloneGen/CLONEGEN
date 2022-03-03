int main () {
    int i, j, k, m, ai, aj, ak;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++) {
                ai = (j > i) + (i == k);
                aj = (i > j) + (i > k);
                ak = (k > j) + (j > i);
                if (((i > j) == (ai < aj)) && ((i < j) == (ai > aj)) && ((i > k) == (ai < ak)) && ((i < k) == (ai > ak)) && ((k > j) == (ak < aj)) && ((k < j) == (ak > aj)))
                    for (m = 0; m <= 2; m++) {
                        if (i == m)
                            cout << "A";
                        if (j == m)
                            cout << "B";
                        if (k == m)
                            cout << "C";
                    }
            }
    return 0;
}

