#ifndef AUTOCOLANTES_H_INCLUDED
#define AUTOCOLANTES_H_INCLUDED

quadrados()
{
   int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\autocolantes\\redondos.jpg");
    gotoxy (60,20); printf("Digite quantos Autocolantes pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &autoco1);
    money20 = autoco1*0.20;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %.2f euros",autoco1, money20);
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

redondos()
{
    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\autocolantes\\redondos.jpg");
    gotoxy (60,20); printf("Digite quantos Autocolantes pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &autoco2);
    money21 = autoco2*0.20;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %.2f euros",autoco2, money21);
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

#endif // AUTOCOLANTES_H_INCLUDED
