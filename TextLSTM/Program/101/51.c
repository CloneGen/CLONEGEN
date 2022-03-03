int main () {
    char peo [4];
    int a, b, c, i, judger = 0;
    peo[3] = '\0';
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                judger = 0;
                peo[a] = 'A';
                peo[b] = 'B';
                peo[c] = 'C';
                if ((b > a) + (c == a) == 2 - a)
                    judger++;
                if ((a > b) + (a > c) == 2 - b)
                    judger++;
                if ((c > b) + (b > a) == 2 - c)
                    judger++;
                if (judger == 3)
                    cout << peo << endl;
            }
    return 0;
}

