int main () {
    int z, q, s, l;
    z = 1;
    while (z < 6) {
        q = 1;
        while (q < 6) {
            if (q == z)
                q++;
            s = 1;
            while (s < 6) {
                while (((s == q) + (s == z)) != 0) {
                    s++;
                }
                l = 1;
                while (l < 6) {
                    while (((l == z) + (l == q) + (l == s)) != 0) {
                        l++;
                    }
                    if ((((z + q) != (s + l)) + ((z + l) <= (s + q)) + ((z + s) >= q)) == 0)
                        break;
                    l++;
                }
                if ((((z + q) != (s + l)) + ((z + l) <= (s + q)) + ((z + s) >= q)) == 0)
                    break;
                s++;
            }
            if ((((z + q) != (s + l)) + ((z + l) <= (s + q)) + ((z + s) >= q)) == 0)
                break;
            q++;
        }
        if ((((z + q) != (s + l)) + ((z + l) <= (s + q)) + ((z + s) >= q)) == 0)
            break;
        z++;
    }
    z = z * 10;
    s = s * 10;
    l = l * 10;
    q = q * 10;
    char a [5];
    a[0] = 'z';
    a[1] = 'q';
    a[2] = 's';
    a[3] = 'l';
    int b [5], i = 0, j = 1;
    b[0] = z;
    b[1] = q;
    b[2] = s;
    b[3] = l;
    while (i < 3) {
        while (j < 4) {
            if (b[i] > b[j]) {
                b[4] = b[i], a[4] = a[i];
                b[i] = b[j], a[i] = a[j];
                b[j] = b[4], a[j] = a[4];
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    i = 3;
    while (i >= 0) {
        cout << a[i] << " " << b[i] << "\n" << endl;
        i--;
    }
    return 0;
}

