int main () {
    int a, b, c, d, e, i, j;
    int m [5], n [5];
    for (a = 1; a < 6; a++)
        for (b = 1; b < 6; b++)
            for (c = 1; c < 6; c++)
                for (d = 1; d < 6; d++)
                    for (e = 1; e < 6; e++)
                        if ((a * b * c * d * e == 120) && (e != 2) && (e != 3)) {
                            m[0] = a;
                            m[1] = b;
                            m[2] = c;
                            m[3] = d;
                            m[4] = e;
                            n[0] = (e == 1);
                            n[1] = (b == 2);
                            n[2] = (a == 5);
                            n[3] = (c != 1);
                            n[4] = (d == 1);
                            for (i = 0; i < 5; i++)
                                for (j = 0; j < 5; j++)
                                    if ((i < j) && (m[i] + m[j] == 3) && (n[i] + n[j] == 2) && (n[0] + n[1] + n[2] + n[3] + n[4] == 2)) {
                                        cout << m[0];
                                        cout << " " << m[1];
                                        cout << " " << m[2];
                                        cout << " " << m[3];
                                        cout << " " << m[4];
                                    }
                        }
    return 0;
}

