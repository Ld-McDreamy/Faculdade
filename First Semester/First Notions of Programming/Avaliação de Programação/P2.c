#include <stdlib.h>
#include <stdlib.h>

// Andresssa Aoki de Araujo 74140
// Vinicius Rodrigues de Carvalho - 74.381

/*  19h20
    19h35
    19h50
    20h10*/

int main (){

    int voto, eleitor, c1, c2, c3, c4, vb, vn, total, mais;
    float pvn, pvb;
    pvn = pvb = 0.00;
    voto = eleitor = c1 = c2 = c3 = c4 = vb = vn = total = pvn = pvb = 0;

    printf("\n\n\t############################## Vota\207\306o 2020 ##############################");
    do {
        printf("\n##### ----> 1 - Jos\202/ 2 - Jo\306o/ 3 - Maria/ 4 - Jorge/ 5 - Voto Nulo / 6 - Voto em Branco");
        printf ("\nDigite seu voto: ");
        scanf ("%d",&voto);

        switch (voto)
        {
        case 1:
            c1++;
            total++;
            break;

        case 2:
            c2++;
            total++;
            break;

        case 3:
            c3++;
            total++;
            break;
        
        case 4:
            c4++;
            total++;
            break;

        case 5:
            vn++;
            total++;
            break;
        
        case 6:
            vb++;
            total++;
            break;
        
        default:
            printf ("Voto n\306o computado\n");
            break;
        }
        
    }while (voto!=0);

    printf ("\n\nTotal de votos");
    printf ("\nJos\202 = %d",c1);
    printf ("\nJo\306o = %d",c2);
    printf ("\nMaria = %d",c3);
    printf ("\nJorge = %d",c4);
    printf ("\nVoto Nulo = %d",vn);
    printf ("\nVoto em Branco = %d",vb);
    printf ("\nTotal de votos = %d", total);

    if (c1>c2 && c1>c3 && c1>c4){
        mais = 1;
    }

    if (c2> c1 && c2>c3 && c2>c4){
        mais = 2;
    }

    if (c3> c1 && c3>c2 && c3>c4){
        mais = 3;
    }

    if (c4>c1 && c4>c2 && c4>c3) {
        mais = 4;
    }

    
    
    pvn = (100.00/total)*vn;
    pvb = (100.00/total)*vb;
    printf ("\nA porcentagem de votos brancos sobre o total de votos = %.2f%%", pvb);
    printf ("\nA porcentagem de votos nulos sobre o total de votos = %.2f%%", pvn);
    printf ("\nCandidato mais votado \202 %d", mais);
   
}
