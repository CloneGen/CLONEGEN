int main () {
    int a [3], n1, n2, n3, t1, t2, t3, i;
    char b [3] = {'A', 'B', 'C'};
    for (n1 = 1; n1 <= 3; n1++) {
        a[0] = n1;
        for (n2 = 1; n2 <= 3; n2++) {
            a[1] = n2;
            for (n3 = 1; n3 <= 3; n3++) {
                a[2] = n3;
                t1 = (a[1] > a[0]) + (a[2] == a[0]);
                t2 = (a[0] > a[1]) + (a[0] > a[2]);
                t3 = (a[2] > a[1]) + (a[1] > a[0]);
            }
        }
    }
    cout << "BCA";
    return 0;
}

