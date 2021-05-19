#include <stdio.h>
#include <conio.h>
#include <time.h>
int main ( );
void Janela6 ( ) {
     int lin, col;
     for ( lin = 2; lin <= 24 ; lin++ )
         for ( col = 3; col <= 78 ; col++ ) {
              gotoxy ( col , lin );
              textbackground ( 6 );
              printf ( " " );
         }
     for ( lin = 5; lin <= 21 ; lin++ )
         for ( col = 6; col <= 75 ; col++ ) {
              gotoxy ( col , lin );
              textbackground ( 16 );
              printf ( " " );
         }
}
void Janela5 ( ) {
     int lin, col;
     for ( lin = 0; lin <= 25 ; lin++ ) {
         for ( col = 0; col <= 80 ; col++ ) {
              gotoxy ( col , lin );
              if ( lin == 2 ) {

                   printf ( " " );
              }
              if ( col == 1 ) {

                   printf ( " " );
              }
              if ( lin == 25 ) {

              }
              if ( col == 80 ) {

                   printf ( " " );
              }
         }
     }
}
void Funcexit ( ) {
     time_t hora_atual;
     system ( "cls" );
     Janela5 ( );
     gotoxy ( 35 , 3 );
     printf ( "PROGRAMA MENU" );
     
     gotoxy ( 32 , 11 );
     printf ( "OPERAÇÃO FINALIZADA" );
     gotoxy ( 52 , 11 );
     Sleep ( 1800 );
     
     gotoxy ( 20 , 13 );
     printf ( "MUITO OBRIGADO POR TER USADO ESTE PROGRAMA\n" );
     Sleep ( 1800 );
     time ( &hora_atual );
     gotoxy ( 20 , 15 );
     printf ( "A data e hora atuais são: %s" , ctime ( &hora_atual ) );
     gotoxy ( 71 , 15 );
     Sleep ( 2800 );
     exit ( 0 );
}
int menu2 ( ) {
     int op;
     do {
         system ( "cls" );
         Janela5 ( );
         gotoxy ( 35 , 3 );
         printf ( "PROGRAMA MENU" );
         
         gotoxy ( 29 , 5 );
         printf ( "SEJA BEM VINDO AO SUB - MENU 2" );
         
         gotoxy ( 29 , 7 );
         printf ( "Escolha uma opção abaixo" );
         
         gotoxy ( 29 , 9 );
         printf ( "1 - EXEMPLO" );
         gotoxy ( 29 , 11 );
         printf ( "2 - SAIR" );
         gotoxy ( 29 , 13 );
         printf ( "3 - VOLTA AO MENU PRINCIPAL" );
         gotoxy ( 29 , 15 );
         
         scanf ( "%d" , &op );
         fflush ( stdin );
         system ( "cls" );
         Janela5 ( );
         switch ( op ) {
              case 1:
                   gotoxy ( 32 , 10 );
                   printf ( "ISTO E SO UM EXEMPLO" );
                   Sleep ( 1800 );
                   break;
              case 2:
                   Funcexit ( );
                   break;
              case 3:
                   return 1;
                   break;
              default:
                   gotoxy ( 34 , 20 );
                   printf ( "\aOpção inválida!\n" );
                   Sleep ( 1800 );
                   break;
         }
     } while ( op != 0 );
     return ( 0 );
}
int menu1 ( ) {
     int op;
     do {
         system ( "cls" );
         Janela5 ( );
         gotoxy ( 35 , 3 );
         printf ( "PROGRAMA MENU" );
         
         gotoxy ( 29 , 5 );
         printf ( "SEJA BEM VINDO AO SUB - MENU 1" );
         
         gotoxy ( 29 , 7 );
         printf ( "Escolha uma opção abaixo" );
         gotoxy ( 29 , 9 );
         printf ( "1 - EXEMPLO" );
         gotoxy ( 29 , 11 );
         printf ( "2 - SAIR" );
         gotoxy ( 29 , 13 );
         printf ( "3 - VOLTA AO MENU PRINCIPAL" );
         gotoxy ( 29 , 15 );
         scanf ( "%d" , &op );
         fflush ( stdin );
         system ( "cls" );
         Janela5 ( );
         switch ( op ) {
              case 1:
                   gotoxy ( 32 , 10 );
                   printf ( "ISTO E SO UM EXEMPLO" );
                   Sleep ( 1800 );
                   break;
              case 2:
                   Funcexit ( );
                   break;
              case 3:
                   return 1;
                   break;
              default:
                   gotoxy ( 34 , 20 );
                   printf ( "\aOpção inválida!\n" );
                   Sleep ( 1800 );
                   break;
         }
     } while ( op != 0 );
     return ( 0 );
}
int main ( ) {
     int op;
     do {
         Janela6 ( );
         system ( "title PROGRAMA MENU" );
         
         gotoxy ( 35 , 3 );
         printf ( "PROGRAMA MENU" );
         
         gotoxy ( 34 , 8 );
         printf ( "MENU PRINCIPAL" );
         
         gotoxy ( 29 , 10 );
         printf ( "Escolha uma opção abaixo" );
         
         gotoxy ( 29 , 12 );
         printf ( "1 - Sub - Menu 1" );
         gotoxy ( 29 , 14 );
         printf ( "2 - Sub - Menu 2" );
         gotoxy ( 29 , 16 );
         printf ( "3 - SAIR" );
         gotoxy ( 29 , 18 );
         scanf ( "%d" , &op );
         fflush ( stdin );
         switch ( op ) {
              case 1:
                   menu1 ( );
                   break;
              case 2:
                   menu2 ( );
                   break;
              case 3:
                   Janela5 ( );
                   Funcexit ( );
                   break;
              default:
                   gotoxy ( 34 , 20 );
                   printf ( "\aOpção inválida!\n" );
                   Sleep ( 1800 );
                   break;
         }
     } while ( op != 0 );
     Funcexit ( );
     return 0;
}
