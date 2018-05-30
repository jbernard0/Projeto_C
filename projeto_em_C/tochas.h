#ifndef TOCHAS_H_INCLUDED
#define TOCHAS_H_INCLUDED


pyro_tochas()
{

    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\projeto_em_C\\imagens\\pyro\\tochas.jpg");
    gotoxy (60,20); printf("digite quantas tochas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &tochas);
    money1 = tochas*3.20;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %.2f euros",tochas, money1);
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


pyro_potes()
{
     int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\projeto_em_C\\imagens\\pyro\\tochas.jpg");
    gotoxy (60,20); printf("digite quantos potes de fumo pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &potes);
    money2 = potes*4.30;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %.2f euros",potes, money2);
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

pyro_petardos()
{
    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\pyro\\petardos.jpg");
    gotoxy (60,20); printf("digite quantos petardos pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &petar);
    money3 = petar*1;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,19); printf("voce adquiriu %i e vai pagar %i euros",petar, money3);
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

pyro_fumos()
{
    int answer, menu1;


    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\pyro\\Estroboscópios.jpg");
    gotoxy (60,20); printf("Digite quantos Estroboscópios pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &fumos);
    money4 = fumos*4,80;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,19); printf("voce adquiriu %i e vai pagar %.2f euros", fumos, money4);
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

#endif // TOCHAS_H_INCLUDED
