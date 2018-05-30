#ifndef ROUPA_H_INCLUDED
#define ROUPA_H_INCLUDED

roupa_camisola_lyle()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\lyle\\lyle_camisola.jpg");
    gotoxy (60,20); printf("digite quantas camisolas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &camisolas1);
    money5 = camisolas1*100;

    gotoxy (60,23);printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,19); printf("voce adquiriu %i e vai pagar %i euros",camisolas1, money5);
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


roupa_camisola_cp()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\cp\\camisola_cp.jpg");
    gotoxy (60,20); printf("digite quantas camisolas pretende adquirir");

    gotoxy (60,23); printf(" >  ");

    scanf("%i", &camisolas2);
    money6 = camisolas2*200;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,19); printf("voce adquiriu %i e vai pagar %i euros",camisolas2, money6);
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


roupa_camisola_stone()
{
    int  answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\stone\\camisola_stone.jfif");
    gotoxy (60,20); printf("digite quantas camisolas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &camisolas3);
    money7 = camisolas3*300;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",camisolas3, money7);
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


roupa_camisola_ellesse()
{
    int  answer, artigos ,menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\ellesse\\camisola_ellesse.jfif");
    gotoxy (60,20); printf("digite quantas camisolas pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &camisolas4);
    money8 = camisolas4*250;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,19); printf("voce adquiriu %i e vai pagar %i euros",camisolas4, money8);
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


roupa_shirt_lyle()
{

    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);


    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\lyle\\t-shirt_lyle.jfif");
    gotoxy (60,20); printf("digite quantas T-Shirts pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &shirts1);
    money9 = shirts1*50;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",shirts1, money9);
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




roupa_shirt_cp()
{

    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\cp\\t-shirt_cp.jpg");
    gotoxy (60,20);printf("digite quantas T-Shirts pretende adquirir");
    gotoxy (60,23);printf(" >  ");

    scanf("%i", &shirts2);
    money10 = shirts2*60;

    gotoxy (60,23);printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",shirts2, money10);
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





roupa_shirt_stone()
{
    int answer, artigos, menu1;
    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\stone\\t-shirt_stone.jfif");
    gotoxy (60,20); printf("digite quantas T-Shirts pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &shirts3);
    money11 = shirts3*85;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",shirts3, money11);
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


roupa_shirt_ellesse()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\ellesse\\t-shirt_ellesse.jfif");
    gotoxy (60,20); printf("digite quantas T-Shirts pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &shirts4);
    money12 = shirts4*70;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",shirts4, money12);
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




roupa_casacos_lyle()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\lyle\\lyle_casaco.jpg");
    gotoxy (60,20); printf("Digite quantos Casacos pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &casacos1);
    money13 = casacos1*160;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",casacos1, money13);
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

roupa_casacos_stone()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    system("C:\\Users\\PSI17F09\\Desktop\\programação\\projeto_em_C\\imagens\\roupa\\stone\\casaco_stone.jpg");
    gotoxy (60,20); printf("Digite quantos Casacos pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &casacos2);
    money14 = casacos2*160;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",casacos2, money14);
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



roupa_casacos_cp()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Casacos pretende adquirir");
    gotoxy (60,23); printf(" >  ");

    scanf("%i", &casacos3);
    money15 = casacos3*490;

    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",casacos3, money15);
    gotoxy(60,21); printf("Quer continuar a fazer compras ou fazer check-out ?");
    gotoxy(60,23); printf(" 1|   > continuar a fazer compras|");
    gotoxy(60,24); printf(" 2|   > check-out|");
    printf("\n\n\n\n\n                                                            >  ");
    scanf("%i", &answer);
    switch(answer)
    {
        case 1: ;break;
        case 2: carrinho_oficial();
                exit(0);break;
    }


}



roupa_casacos_ellesse()
{
     int answer, artigos , menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Casacos pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &casacos4);
    money16 = casacos4*120;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",casacos4, money16);
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

roupa_bone_lyle()
{

    int  answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Bonés pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &bone1);
    money22 = bone1*25;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",bone1, money22);
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

roupa_bone_cp()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Bonés pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &bone2);
    money23 = bone2*25;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",bone2, money23);
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

roupa_bone_stone()
{

 int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Bonés pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &bone3);
    money24 = bone3*57;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",bone3, money24);
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

roupa_bone_ellesse()
{
    int answer, artigos, menu1;

    ascii();
    textcolor(LIGHTGRAY);

    gotoxy (60,20); printf("Digite quantos Bonés pretende adquirir");
    gotoxy (60,23); printf(" >  ");
    scanf("%i", &bone4);
    money25 = bone4*57;
    gotoxy (60,23); printf("a calcular\n\n");

    gotoxy (70,23);    Sleep(100); printf(".");
    gotoxy (71,23);    Sleep(200); printf(".");
    gotoxy (72,23);    Sleep(300); printf(".");
    Sleep(400);

    system("cls");
    ascii();
    textcolor(LIGHTGRAY);

    gotoxy(60,19); printf("voce adquiriu %i e vai pagar %i euros",bone4, money25);
    gotoxy(60,21); printf("Quer continuar a fazer compras ou fazer check-out ?");
    do{
    gotoxy(60,23); printf(" 1|   > continuar a fazer compras|");
    gotoxy(60,24); printf(" 2|   > check-out|");
    printf("\n\n\n\n\n                                                            >  ");
    scanf("%i", &answer);
    switch(answer)
    {
        case 1: break;
        case 2: carrinho_oficial();
                exit(0);break;
    }
    }while(answer!=1);

}



#endif // ROUPA_H_INCLUDED
