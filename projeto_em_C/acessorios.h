#ifndef ACESSORIOS_H_INCLUDED
#define ACESSORIOS_H_INCLUDED

acess_almofadas_benfica()
{
    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\joao\\Desktop\\projeto_em_C\\imagens\\acessorios\\Benfica.JPG");
    gotoxy (60,20); printf("digite quantas almofadas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &almofadas1);
    money17 = almofadas1*7;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",almofadas1, money17);
    gotoxy(60,21); printf("Quer continuar a fazer compras ou fazer check-out ?");
    gotoxy(60,23); printf(" 1|   > continuar a fazer compras|");
    gotoxy(60,24); printf(" 2|   > check-out|");

    printf("\n\n\n\n\n                                                            >  ");
    scanf("%i", &answer);
    switch(answer)
    {
        case 1: menu1;break;
        case 2:carrinho_oficial();
                exit(0);break;
    }
}

acess_almofadas_dortmund()
{
    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("digite quantas almofadas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &almofadas2);
    money18 = almofadas2*7;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",almofadas2, money18);
    gotoxy(60,21); printf("Quer continuar a fazer compras ou fazer check-out ?"),
    gotoxy(60,23); printf(" 1|   > continuar a fazer compras|");
    gotoxy(60,24); printf(" 2|   > check-out|");
    printf("\n\n\n\n\n                                                            >  ");
    scanf("%i", &answer);
    switch(answer)
    {
        case 1: menu1;break;
        case 2: carrinho_oficial();
                exit(0);break;
    }


}

acess_almofadas_portugal()
{
    int answer, menu1;

    ascii();
    textcolor(LIGHTGRAY);


    gotoxy (60,20); printf("digite quantas almofadas pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &almofadas3);
    money19 = almofadas3*7;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",almofadas3, money19);
    gotoxy(60,21); printf("Quer continuar a fazer compras ou fazer check-out ?");
    gotoxy(60,23); printf(" 1|   > continuar a fazer compras|");
    gotoxy(60,24); printf(" 2|   > check-out|");
    printf("\n\n\n\n\n                                                            >  ");
    scanf("%i", &answer);
    switch(answer)
    {
        case 1: menu1;break;
        case 2: carrinho_oficial();
                exit(0);break;
    }

}

#endif // ACESSORIOS_H_INCLUDED
