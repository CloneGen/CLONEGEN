int main () {
    int zhao, qian, sun, li;
    int z, q, s, l;
    for (z = 1; z <= 5; ++z)
        for (q = 1; q <= 5; ++q)
            for (s = 1; s <= 5; ++s)
                for (l = 1; l <= 5; ++l)
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        zhao = z * 10;
                        qian = q * 10;
                        sun = s * 10;
                        li = l * 10;
                    }
    const  int z1 = zhao, q1 = qian, s1 = sun, l1 = li;
    while (zhao < 60 || qian < 60 || sun < 60 || li < 60) {
        zhao += 10;
        qian += 10;
        sun += 10;
        li += 10;
        if (zhao == 60)
            cout << "z " << z1 << endl;
        if (qian == 60)
            cout << "q " << q1 << endl;
        if (sun == 60)
            cout << "s " << s1 << endl;
        if (li == 60)
            cout << "l " << l1 << endl;
    }
    return 0;
}

