#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

struct login login;

registo()
{
   system("cls");
   textcolor(WHITE);
   printf("\n");
   gotoxy(75,20);
   printf("Escolha o seu username   > ");
   gets(login.nome);
   gotoxy(75,23);
   printf("Escolha uma password     > ");
   gets(login.pass);
   strcat(login.nome,login.pass);
   FILE*aq;
   aq=fopen(login.nome,"w");
   fprintf(aq, "WELCOME TO ULTRA SHOP \n username: %s\n password: %s", login.nome , login.pass);
   fclose(aq);
   system("cls");
}



login_entrada()
{
    int i=0; char c, pass[101];


       textcolor(WHITE);
       system("cls");
       printf("\n");
       gotoxy(75,20);
       printf(" Username   : ");
       gets(login.nome);
       printf("\n");
       gotoxy(75,23);
       printf(" PASSWORD   : ");

        while(c!=13 && i<100){
        pass[i++]=c=getch();
        printf((c!=13)?"*":"\n");
        }
        pass[i--] = '\0';

       gets(login.pass);
       printf("\n");
       strcat(login.nome, login.pass);
       FILE*aq;
       aq = fopen(login.nome, "r");
       if(!aq)
       {
           fclose(aq);
           system("cls");
           printf("\n\n");
           gotoxy(75,20);
           printf("Login incorreto, por favor repita\n");
           gotoxy(75,23);
           system("pause");
           system("cls");
           login_entrada();
       }
       else
       {
           system("cls");
       }
}


#endif // LOGIN_H_INCLUDED
