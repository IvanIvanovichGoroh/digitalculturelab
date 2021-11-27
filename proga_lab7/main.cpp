//7

//7.1
//#include <conio.h>
//#include <stdio.h>
//
//enum OS {
//    Symbian,
//    Linux,
//    Windows,
//    QNX
//};
//
//int main() {
//    enum OS a, b, c, d;
//
//    a = Symbian;
//    b = Linux;
//    c = Windows;
//    d = QNX;
//
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//    printf("c = %d\n", c);
//    printf("d = %d\n", d);
//
//}

////7.2
//#include <stdio.h>
//#include <locale.h>
//
//struct Square
//{
//    int a;
//};
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//
//    struct Square sqr;
//
//    scanf("%d", &sqr.a);
//
//    printf("S = %d\n", sqr.a * sqr.a);
//    printf("P = %d\n", sqr.a * 4);
//
//    return 0;
//}

//7.3
//
//#include <stdio.h>
//
//struct printer {
//    unsigned int ready: 1;
//    unsigned int low_toner: 1;
//    unsigned int error: 1;
//    unsigned int low_paper: 1;
//};
//
//union printer_u {
//    unsigned u;
//    struct printer printer;
//};
//int main()
//{
//    union printer_u printer_s;
//    printf("Insert: ");
//    scanf("%x", &printer_s.u);
//    printf("Ready: %d\n", printer_s.printer.ready);
//    printf("Low_toner: %d\n", printer_s.printer.low_toner);
//    printf("error: %d\n", printer_s.printer.error);
//    printf("Low_paper: %d\n", printer_s.printer.low_paper);
//}