int main () {
    int a, b, c, n1, n2, n3;
    n1 = n2 = n3 = 0;
    a = 1;
    b = 2;
    c = 3;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n1 > n2 > n3)
        cout << "A" << "B" << "C";
    n1 = n2 = n3 = 0;
    c = 1;
    a = 2;
    b = 3;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n3 > n1 > n2)
        cout << "C" << "A" << "B";
    n1 = n2 = n3 = 0;
    a = 1;
    b = 3;
    c = 2;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n1 > n3 > n2)
        cout << "A" << "C" << "B";
    n1 = n2 = n3 = 0;
    b = 1;
    a = 2;
    c = 3;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n1 > n2 > n3)
        cout << "B" << "A" << "C";
    n1 = n2 = n3 = 0;
    b = 1;
    c = 2;
    a = 3;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n2 > n3 > n1)
        cout << "B" << "C" << "A";
    n1 = n2 = n3 = 0;
    c = 1;
    b = 2;
    a = 3;
    if (b > a)
        n1 = n1 + 1;
    if (c == a)
        n1 = n1 + 1;
    if (a > b)
        n2 = n2 + 1;
    if (a > c)
        n2 = n2 + 1;
    if (c > b)
        n3 = n3 + 1;
    if (b > a)
        n3 = n3 + 1;
    if (n3 > n2 > n1)
        cout << "C" << "B" << "A";
    return 0;
}

