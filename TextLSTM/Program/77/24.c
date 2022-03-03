char boy;
int first = 0;

int fun (int n) {
    char temp;
    temp = cin.get ();
    if (first == 0) {
        boy = temp;
        first = 1;
    }
    if (temp == boy) {
        int num = fun (n + 1);
        cout << n << " " << num << endl;
        return fun (num + 1);
    }
    else
        return (n);
}

int main () {
    fun (0);
    return 0;
}

