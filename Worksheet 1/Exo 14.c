/*
Algorithm Un_Vn;
Vars
Begin
    repeat {
        write("Give a number: ");
        read(n);

        if (n <= 2) write("Must be > 2 !");
    } until (n > 2);

    Un1 = 1;
    Un2 = 2;
    Vn2 = 3;

    for i from 3 to n {
        Un = 2*Un2 - Un1;
        Vn = Vn2 - Un;
        Un1 = Un2;
        Un2 = Un;
        Vn2 = Vn;
    }

    write("U(",n,") = ", Un);
    write("V(",n,") = ", Vn);
End.
*/

int U(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    return 2*U(n-1)-U(n-2);
}

int V(int n) {
    if (n == 2) return 3;

    return V(n-1) - U(n);
}

int main() {
    int n;

    printf("Give a number: ");
    scanf("%d", &n);

    printf("U(%d) = %d", n, U(n));
    printf("V(%d) = %d", n, V(n));
}