#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <locale.h>


float money1=0;
float money2=0;
float money4=0;
float money21=0;
float money22=0;
float money20=0;


int money3=0;
int money5=0;
int money6=0;
int money7=0;
int money8=0;
int money9=0;
int money10=0;
int money11=0;
int money12=0;
int money13=0;
int money14=0;
int money15=0;
int money16=0;
int money23=0;
int money17=0;
int money18=0;
int money19=0;
int money24=0;
int money25=0;

int tochas, potes, petar, fumos;

int camisolas1, camisolas2, camisolas3,camisolas4,   shirts1, shirts2, shirts3,shirts4,   casacos1,casacos2,casacos3,casacos4;

int almofadas1,almofadas2,almofadas3;

int autoco1,autoco2;

int bone1,bone2,bone3,bone4;

int genero;

#include "tochas.h"
#include "roupa.h"
#include "ascii art.h"
#include "acessorios.h"
#include "autocolantes.h"
#include "carrinho.h"

struct login{
char nome [35];
char pass [16];
};

#include "login.h"



menu_inicial()
{
   int menu1;

   menu1;
}


int main()
{
    setlocale(LC_ALL, ("PORTUGUESE"));

    int genero, marca, tamanho, artigos;

    int login_registo,menu1,menu2,menu3,menu4, registar;

    gotoxy(75,21); printf("    1|   >  Login|");
    gotoxy(75,23); printf("    2|   >  Registo|");
    gotoxy(75,25); printf("    3|   >  SAIR|");
    printf("\n\n\n\n\n                                                                                   >  ");
    scanf("%i%*C", &registar);
          switch(registar)
          {
              case 1: login_entrada();
                      gotoxy(70,20); printf("a entrar na conta");Sleep(500); printf("."); Sleep(600); printf("."); Sleep(700); printf("."); Sleep(800);;break;

              case 2: registo();

                      gotoxy(70,20); printf("a criar conta");Sleep(500); printf("."); Sleep(600); printf("."); Sleep(700); printf("."); Sleep(800);
                      login_entrada();
                      gotoxy(70,20); printf("a entrar na conta");Sleep(500); printf("."); Sleep(600); printf("."); Sleep(700); printf("."); Sleep(800);;break;

              case 3: exit(0);
                      system("cls");break;

          }

          system("cls");

    do{
    gotoxy(80,24);
    system("cls");
    ascii();
    logo();
    gotoxy (75,22); system("Pause");
    system("cls");

    repete:
    ascii();
    textcolor(LIGHTGRAY);
    gotoxy (55,20); printf("    1|  >   Pirotecnia|           ");
    gotoxy (95,20); printf("    2|  >   Roupa|                ");
    gotoxy (55,25); printf("    3|  >   Acessorios|         ");
    gotoxy (95,25); printf("      4|  >   Autocolantes|           ");
    printf("\n\n\n\n\n\n                                                                      >  ");
    scanf("%i", &menu1);
    system("cls");
    switch(menu1)
    {
        case 1:
                do{
                        ascii();
                textcolor(LIGHTGRAY);


                gotoxy (55,20); printf("    1|   >    Tochas|              ");
                gotoxy (95,20); printf("    2|   >    Potes de Fumo|       ");
                gotoxy (55,25); printf("    3|   >    Petardos|            ");
                gotoxy (95,25); printf("    4|   >    Estroboscópios|                ");
                printf("\n\n\n\n                                                                             5|   >    MENU INICIAL|        ");
                printf("\n\n\n\n\n\n\n                                                           >  ");
                scanf("%i", &menu2);
                system("cls");

                switch(menu2)
                         {
                             case 1:pyro_tochas();
                                   system("cls");break;

                             case 2:pyro_potes();
                                    system("cls");break;

                             case 3:pyro_petardos();
                                    system("cls");break;

                             case 4:pyro_fumos();
                                    system("cls");break;

                             case 5:menu_inicial();
                                    system("cls");break;

                                    default: printf("erro =)");

                         }

                }while(menu2!=5);break;

        case 2:
                    do{


                     ascii();
                     textcolor(LIGHTGRAY);

                    gotoxy(55,20); printf("     1|    >  Camisolas|");
                    gotoxy(80,20); printf("         2|    >  T-Shirt|");
                    gotoxy(55,25); printf("     3|    >  Casacos|");
                    gotoxy(80,25); printf("         4|   >  Bonés");
                    printf("\n\n\n\n                                                                             5|   >    MENU INICIAL|        ");
                    printf("\n\n\n\n\n                                                                 >  ");
                    scanf("%i", &artigos);
                    system("cls");
                    switch(artigos)
                    {
                         case 1: artigos;
                                 system("cls");break;

                         case 2: artigos;
                                 system("cls");break;

                         case 3: artigos;
                                 system("cls");break;

                         case 4: artigos;
                                 system("cls");break;

                         case 5:goto repete;
                                system("cls");break;
                    }

                 do{

                    ascii();
                    textcolor(LIGHTGRAY);

                    gotoxy(60,20); printf("Digite o seu Genero");
                    gotoxy(55,22); printf(" 1|   >  Masculino|\n");
                    gotoxy(80,22); printf(" 2|   >  Feminino|\n");
                    printf("\n\n\n\n                                                                             5|   >    MENU INICIAL|        ");
                    printf("\n\n\n\n\n\n\n                                                           >  ");
                    scanf("%i", &genero);
                    system("cls");
                    switch(genero)
                    {
                                   case 1:
                                                    do{

                                                ascii();
                                                textcolor(LIGHTGRAY);

                                                gotoxy(60,20); printf("Escolha a marca que quer comprar");
                                                gotoxy(55,22); printf("1|   >  Lyle & Scott|");
                                                gotoxy(80,22); printf("2|   >  C.P. Company|");
                                                gotoxy(55,25); printf("3|   >  Stone Island|");
                                                gotoxy(80,25); printf("4|   >  Ellesse|");
                                                printf("\n\n\n\n                                                              5|   >    MENU INICIAL|        ");
                                                printf("\n\n\n\n\n\n\n                                                           >  ");
                                                scanf("%i", &marca);
                                                system("cls");
                                                switch(marca)
                                                {
                                                    case 1: if  (artigos == 1){
                                                                roupa_camisola_lyle();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 2){
                                                                     roupa_shirt_lyle();
                                                                     system("cls");
                                                            }
                                                            else if(artigos == 3){
                                                                roupa_casacos_lyle();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 4){
                                                                roupa_bone_lyle();
                                                                system("cls");break;
                                                            }


                                                      case 2: if(artigos == 1){
                                                                 roupa_camisola_cp();
                                                                 system("cls");
                                                             }
                                                             else if (artigos == 2){
                                                                     roupa_shirt_cp();
                                                                     system("cls");
                                                             }
                                                             else if(artigos == 3){
                                                                roupa_casacos_cp();
                                                                system("cls");
                                                             }
                                                              else if(artigos == 4){
                                                                roupa_bone_cp();
                                                                system("cls");break;
                                                             }



                                                     case 3: if ( artigos == 1)  {
                                                               roupa_camisola_stone();
                                                               system("cls");
                                                            }
                                                            else if(artigos == 2){
                                                                roupa_shirt_stone();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 3){
                                                                roupa_casacos_stone();
                                                                system("cls");
                                                                }
                                                                 else if(artigos == 4){
                                                                roupa_bone_stone();
                                                                system("cls");break;
                                                            }


                                                     case 4: if(artigos == 1){
                                                                roupa_camisola_ellesse();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 2){
                                                                roupa_shirt_ellesse();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 3){
                                                                roupa_casacos_ellesse();
                                                                system("cls");
                                                            }
                                                             else if(artigos == 4){
                                                                roupa_bone_ellesse();
                                                                system("cls");break;
                                                            }

                                                      case 5: menu_inicial();
                                                              system("cls");break;

                                                 }
                                                 }while(marca!=5);break;



                                  case 2:
                                             do{

                                                ascii();
                                                textcolor(LIGHTGRAY);

                                                gotoxy(60,20); printf("Escolha a marca que quer comprar");
                                                gotoxy(55,22); printf("1|   >   Lyle & Scott|");
                                                gotoxy(80,22); printf("2|   >   C.P. Company|");
                                                gotoxy(80,22); printf("3|   >   Stone Island|");
                                                gotoxy(80,25); printf("4|   >   Ellesse|\n");

                                                printf("\n\n\n\n\n\n\n                                                           >  ");
                                                scanf("%i", &marca);
                                                system("cls");
                                                switch(marca)
                                                {
                                                    case 1: if  (artigos == 1){
                                                                roupa_camisola_lyle();
                                                                system("cls");
                                                            }
                                                            else if (artigos == 2){
                                                                     roupa_shirt_lyle();
                                                                     system("cls");
                                                            }
                                                             else if(artigos == 3){
                                                                roupa_casacos_lyle();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 4){
                                                                roupa_bone_lyle();
                                                                system("cls");break;
                                                            }


                                                      case 2: if(artigos == 1){
                                                                 roupa_camisola_cp();
                                                                 system("cls");
                                                             }
                                                             else if (artigos == 2){
                                                                     roupa_shirt_cp();
                                                                     system("cls");
                                                             }
                                                              else if(artigos == 3){
                                                                roupa_casacos_cp();
                                                                system("cls");
                                                             }
                                                              else if(artigos == 4){
                                                                roupa_bone_cp();
                                                                system("cls");break;
                                                            }


                                                     case 3:
                                                            if(artigos == 1){
                                                               roupa_camisola_stone();
                                                               system("cls");
                                                            }
                                                            else if(artigos == 2){
                                                                roupa_shirt_stone();
                                                                system("cls");
                                                            }
                                                             else if(artigos == 3){
                                                                roupa_casacos_stone();
                                                                system("cls");
                                                                }
                                                                 else if(artigos == 4){
                                                                roupa_bone_stone();
                                                                system("cls");break;
                                                            }

                                                     case 4:
                                                            if(artigos == 1){
                                                                roupa_camisola_ellesse();
                                                                system("cls");
                                                            }
                                                            else if(artigos == 2){
                                                                roupa_shirt_ellesse();
                                                                system("cls");
                                                            }
                                                             else if(artigos == 3){
                                                                roupa_casacos_ellesse();
                                                                system("cls");
                                                            }
                                                             else if(artigos == 4){
                                                                roupa_bone_ellesse();
                                                                system("cls");;break;
                                                            }
                                                 }
                                                  }while(marca!=4);break;

                                                  case 5:menu_inicial();
                                                         system("cls");break;
                                                  }
                                                  }while(genero!=2);break;


                    }while(artigos!=4);

                                                     case 3:
                                                              do{
                                                              ascii();
                                                              textcolor(LIGHTGRAY);

                                                              gotoxy(60,19); printf("Digite qual é a almofada que pretende adquirir");
                                                              gotoxy(70,21); printf("1|   >  Benfica");
                                                              gotoxy(70,23); printf("2|   >  Dortmund");
                                                              gotoxy(70,25); printf("3|   >  Portugal");
                                                              printf("\n\n\n\n\n                                                                   4|   >  MENU INICIAL  ");
                                                              printf("\n\n\n\n\n\n\n                                                           >  ");
                                                              scanf("%i", &menu3);
                                                              system("cls");

                                                              switch(menu3)
                                                              {
                                                                   case 1: acess_almofadas_benfica();
                                                                           system("cls");break;

                                                                   case 2: acess_almofadas_dortmund();
                                                                           system("cls");break;

                                                                   case 3: acess_almofadas_portugal();
                                                                           system("cls");break;

                                                                   case 4: menu_inicial();
                                                                           system("cls");
                                                              }
                                                              }while(menu3!=4);break;



                                              case 4:
                                                              do{
                                                              ascii();
                                                              textcolor(LIGHTGRAY);

                                                              gotoxy(60,20); printf("Digite qual é o tipo de Autocolante que pretende adquirir");
                                                              gotoxy(60,23); printf("1|   >  Autocolantes Quadrados");
                                                              gotoxy(60,25); printf("2|   >  Autocolantes Redondos");
                                                                             printf("\n\n\n\n\n                                                           3|   >  MENU INICIAL  ");
                                                              printf("\n\n\n\n\n\n\n                                                           >  ");
                                                              scanf("%i", &menu4);
                                                              system("cls");
                                                              switch(menu4)
                                                              {
                                                                  case 1: quadrados();
                                                                          system("cls");break;

                                                                  case 2: redondos();
                                                                          system("cls");break;

                                                                  case 3: menu_inicial();
                                                                          system("cls");break;
                                                              }
                                                              }while(menu4!=3);break;



    }

    }while(menu1!=6);


    return 0;
}
