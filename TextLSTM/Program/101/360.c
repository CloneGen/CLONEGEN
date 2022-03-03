typedef struct  ABC {
    int amount;
    int statements;
    char name;
}
ABC;

int main () {
    ABC p1, p2, p3;
    p1.name = 'A';
    p2.name = 'B';
    p3.name = 'C';
    for (p1.amount = 0; p1.amount < 3; p1.amount++) {
        for (p2.amount = 0; p2.amount < 3; p2.amount++) {
            for (p3.amount = 0; p3.amount < 3; p3.amount++) {
                p1.statements = (p2.amount > p1.amount) + (p3.amount == p1.amount);
                p2.statements = (p1.amount > p2.amount) + (p1.amount > p3.amount);
                p3.statements = (p3.amount > p2.amount) + (p2.amount > p1.amount);
                int a, b, c;
                a = (p1.amount > p2.amount && p1.statements < p2.statements) || (p1.amount < p2.amount && p1.statements > p2.statements);
                b = (p1.amount > p3.amount && p1.statements < p3.statements) || (p1.amount < p3.amount && p1.statements > p3.statements);
                c = (p3.amount > p2.amount && p3.statements < p2.statements) || (p3.amount < p2.amount && p3.statements > p2.statements);
                if (a + b + c == 3) {
                    int temp1;
                    char temp2;
                    if (p1.amount > p2.amount) {
                        temp1 = p1.amount;
                        p1.amount = p2.amount;
                        p2.amount = temp1;
                        temp2 = p1.name;
                        p1.name = p2.name;
                        p2.name = temp2;
                    }
                    if (p1.amount > p3.amount) {
                        temp1 = p1.amount;
                        p1.amount = p3.amount;
                        p3.amount = temp1;
                        temp2 = p1.name;
                        p1.name = p3.name;
                        p3.name = temp2;
                    }
                    if (p2.amount > p3.amount) {
                        temp1 = p3.amount;
                        p3.amount = p2.amount;
                        p2.amount = temp1;
                        temp2 = p3.name;
                        p3.name = p2.name;
                        p2.name = temp2;
                    }
                    cout << p1.name << p2.name << p3.name << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

