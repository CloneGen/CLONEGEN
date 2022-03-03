int main () {
    double i, age, n, a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> age;
        if (1 <= age && age <= 18)
            a++;
        else if (19 <= age && age <= 35)
            b++;
        else if (36 <= age && age <= 60)
            c++;
        else
            d++;
    }
    a = a / n * 100;
    b = b / n * 100;
    c = c / n * 100;
    d = d / n * 100;
    cout << fixed;
    cout << "1-18: " << setprecision (2) << a << "%" << endl;
    cout << "19-35: " << setprecision (2) << b << "%" << endl;
    cout << "36-60: " << setprecision (2) << c << "%" << endl;
    cout << "60??: " << setprecision (2) << d << "%" << endl;
    return 0;
}

