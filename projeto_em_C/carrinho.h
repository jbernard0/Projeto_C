#ifndef CARRINHO_H_INCLUDED
#define CARRINHO_H_INCLUDED

carrinho_oficial()
{
    float money_total;

    system("cls");
    logo_carrinho();
    textcolor(LIGHTGRAY);

    if(money1!=0)
    {
        printf("\n                                                                      |   %i Tochas    > %.2f euros",tochas, money1);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money2!=0)
    {
        printf("\n                                                                      |   %i Potes de Fumo    > %.2f euros",potes,money2);
    }
    else
    {
        printf("");
    }

  //-----------------------------------------------------------------------

    if(money3!=0)
    {
        printf("\n                                                                      |   %i Petardos   > %i euros",petar,money3);
    }
    else
    {
        printf("");
    }
    //-----------------------------------------------------------------------

    if(money4!=0)
    {
        printf("\n                                                                      |   %i Estroboscópios   > %.2f euros",fumos,money4);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money5!=0)
    {
        printf("\n                                                                      |   %i Camisolas Lyle and Scott   > %i euros",camisolas1,money5);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money6!=0)
    {
        printf("\n                                                                      |   %i Camisolas CP. Company   > %i euros",camisolas2,money6);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money7!=0)
    {
        printf("\n                                                                      |   %i Camisolas Stone Island   > %i euros",camisolas3,money7);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money8!=0)
    {
        printf("\n                                                                      |   %i Camisolas Ellesse   > %i euros",camisolas4,money8);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money9!=0)
    {
        printf("\n                                                                      |   %i T-Shirts Lyle and Scott   > %i euros",shirts1,money9);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money10!=0)
    {
        printf("\n                                                                      |   %i T-Shirts CP. Company   > %i euros",shirts2,money10);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------
    if(money11!=0)
    {
        printf("\n                                                                      |   %i T-Shirts Stone Island   > %i euros",shirts3,money11);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money12!=0)
    {
        printf("\n                                                                      |   %i T-Shirts Ellesse   > %i euros",shirts4,money12);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money13!=0)
    {
        printf("\n                                                                      |   %i Casacos Lyle and Scott   > %i euros",casacos1,money13);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money14!=0)
    {
        printf("\n                                                                      |   %i Casacos CP. Company   > %i euros",casacos2,money14);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money15!=0)
    {
        printf("\n                                                                      |   %i Casacos Stone Island   > %i euros",casacos3,money15);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money16!=0)
    {
        printf("\n                                                                      |   %i Casaco Elesse  > %i euros",casacos4,money16);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money17!=0)
    {
        printf("\n                                                                      |   %i Benfica   > %i euros",almofadas1,money17);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money18!=0)
    {
        printf("\n                                                                      |   %i Dortmund  > %i euros",almofadas2,money18);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money19!=0)
    {
        printf("\n                                                                      |   %i Portugal   > %i euros",almofadas3,money19);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money20!=0)
    {
        printf("\n                                                                      |   %i Autocolantes Quadrados   > %.2f euros",autoco1,money20);
    }
    else
    {
        printf("");
    }

    //-----------------------------------------------------------------------

    if(money21!=0)
    {
        printf("\n                                                                      |   %i Autocolantes Redondos   > %.2f euros",autoco2,money21);
    }
    else
    {
        printf("");
    }

     //-----------------------------------------------------------------------

    if(money22!=0)
    {
        printf("\n                                                                      |   %i Boné Lyle and Scott   > %.2f euros",bone1,money22);
    }
    else
    {
        printf("");
    }

     //-----------------------------------------------------------------------

    if(money23!=0)
    {
        printf("\n                                                                      |   %i Boné CP. Company  > %.2f euros",bone2,money23);
    }
    else
    {
        printf("");
    }

    if(money24!=0)
    {
        printf("\n                                                                      |   %i Boné Stone Island   > %.2f euros",bone3,money24);
    }
    else
    {
        printf("");
    }

     //-----------------------------------------------------------------------

    if(money25!=0)
    {
        printf("\n                                                                      |   %i Boné Ellesse   > %.2f euros",bone4,money25);
    }
    else
    {
        printf("");
    }

    money_total=money1+money2+money3+money4+money5+money6+money7+money8+money9+money10+money11+money12+money13+money14+money15+money16+money17+money18+money19+money20+money21+money22;
    printf("\n\n\n                                                                      |   TOTAL = %.2f",money_total);

    gotoxy (75,22);system("PAUSE");
    system("cls");

    int pagar;
    char mail,pass;
    logo_carrinho();
    textcolor (LIGHTGRAY);
    gotoxy(70,20); printf("   |1   > Pagar por Paypal");
    gotoxy(70,23); printf("   |2   > Cancelar pagamento");
    printf("\n\n\n\n\n                                                                                   >  ");
    scanf("%i", &pagar);
    switch(pagar)
    {

                case 1 :

                       system ("cls");
                       logo_carrinho();
                       textcolor (LIGHTGRAY);
                       gotoxy (60,19); printf ("Obrigado por ter escolhido pagar por Paypal,");
                       gotoxy (60,23); printf("a carregar\n\n");
                       gotoxy (70,23);    Sleep(400); printf(".");
                       gotoxy (71,23);    Sleep(500); printf(".");
                       gotoxy (72,23);    Sleep(600); printf(".");
                       Sleep(700);
                       system ("cls");

                       logo_carrinho();
                       textcolor (LIGHTGRAY);
                       gotoxy (70,19); printf ("Insira os seguinte Dados : \n ");
                       gotoxy (70,22); printf("|Email   > \n" );
                       gotoxy (80,22); scanf("%s%*C", &mail);
                       gotoxy (70,23); printf("|Pass   > \n");
                       gotoxy (80,23); scanf ("%s%*C",&pass);
                       system("cls");
                       logo_carrinho();
                       textcolor (LIGHTGRAY);
                       gotoxy (70,19); printf ("Acesso Concedido\n ");
                       gotoxy (70,22); printf ("Acesse o seu email, e confirme o pagamento");
                       gotoxy (70,23); printf ("Valor: %.2f Euros\n ",money_total);
                       Sleep(5600); gotoxy (70,25); printf("á espera\n\n");
                       system ("cls");
                       logo_carrinho();
                       textcolor (LIGHTGRAY);
                       gotoxy (70,23); printf("Quando o pagamento for efectuado as suas compras seram enviadas");
                       Sleep(5000);

                       system("cls");

                       ascii();
                       textcolor (LIGHTGRAY);
                       gotoxy (70,25); printf("Obrigado, volte sempre :)");break;



                case 2: textcolor (LIGHTGRAY);
                        system("cls");
                        gotoxy (70,25); printf("o pagamento foi cancelado por si :(");
                        exit(0);break;



    }
}




#endif // CARRINHO_H_INCLUDED
