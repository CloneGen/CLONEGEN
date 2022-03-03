int main () {
    int a, b, c, a0, b0, c0, x = 0;
    for (a = 0; a <= 2; a++) {
        for (b = 0; b <= 2; b++) {
            if (b == a)
                continue;
            c = 3 - a - b;
            a0 = (b > a) + (c == a);
            b0 = (a > b) + (a > c);
            c0 = (c > b) + (b > a);
            if ((a == (2 - a0)) && (b == 2 - b0) && (c == 2 - c0)) {
                x = 1;
                break;
            }
        }
        if (x == 1)
            break;
    }
    char ch [3];
    ch[a] = 'A', ch[b] = 'B', ch[c] = 'C';
    cout << ch[0] << ch[1] << ch[2];
    return 0;
}

