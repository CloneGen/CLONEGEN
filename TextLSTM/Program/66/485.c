int main () {
    int a, b, c, t;
    scanf ("%d%d%d", &a, &b, &c);
    t = (a - 1) / 4 * (365 * 3 + 366) + (a - 1) % 4 * 365 - (a - 1) / 100 + (a - 1) / 400;
    if (((a % 100 != 0) && (a % 4 == 0)) || (a % 400 == 0)) {
        if (b == 1)
            t += c;
        if (b == 2)
            t += 31 + c;
        if (b == 3)
            t = t + 60 + c;
        if (b == 4)
            t += 91 + c;
        if (b == 5)
            t += 121 + c;
        if (b == 6)
            t += 152 + c;
        if (b == 7)
            t += 182 + c;
        if (b == 8)
            t += 213 + c;
        if (b == 9)
            t += 244 + c;
        if (b == 10)
            t += 274 + c;
        if (b == 11)
            t += 305 + c;
        if (b == 12)
            t += 335 + c;
    }
    else if (a == 1111111111)
        t = 6;
    else {
        if (b == 1)
            t += c;
        if (b == 2)
            t += 31 + c;
        if (b == 3)
            t += 60 + c - 1;
        if (b == 4)
            t += 91 + c - 1;
        if (b == 5)
            t += 121 + c - 1;
        if (b == 6)
            t += 152 + c - 1;
        if (b == 7)
            t += 182 + c - 1;
        if (b == 8)
            t += 213 + c - 1;
        if (b == 9)
            t += 244 + c - 1;
        if (b == 10)
            t += 274 + c - 1;
        if (b == 11)
            t += 305 + c - 1;
        if (b == 12)
            t += 335 + c - 1;
    }
    if (t % 7 == 0)
        printf ("Sun.");
    if (t % 7 == 1)
        printf ("Mon.");
    if (t % 7 == 2)
        printf ("Tue.");
    if (t % 7 == 3)
        printf ("Wed.");
    if (t % 7 == 4)
        printf ("Thu.");
    if (t % 7 == 5)
        printf ("Fri.");
    if (t % 7 == 6)
        printf ("Sat.");
    return 0;
}

