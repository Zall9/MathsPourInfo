#include "tp1.h"

/*
 * fonction de test exécutée avec l'argument "-T" depuis la ligne de commande
 */
int perform_tests(int argc, char **argv)
{
    if (argc > 0 && strcmp(argv[0], "0") == 0)
    {
            // test pour la question 1
        mot m = 0x555;  /* càd 00...000010101010101 en binaire */
        int n = 3;
        printf("Le bit numéro %d de %x est %u et le bit %d est %u.\n", n, m, bit(n,m), n+3, bit(n+3,m));
    }
    else if (argc > 0 && strcmp(argv[0], "05") == 0)
    {
            // test pour la question 1
        mot m = 0xace;  /* càd 00...000010101010101 en binaire */
        int n = 3;
        print_bin(m,n);
    }
    else if (argc > 0 && strcmp(argv[0], "1") == 0)
    {
        // test pour la question 1
        mot m = 0xace;
        printf("le mot '%x' est en fait ", m);
        print_bin(m, 12);
        printf("\n");
        // ...
    }
    else if (argc > 0 && strcmp(argv[0], "2") == 0)
    {
        mot m = 0xace;
        printf("le poids du mot '%x' est en fait %d",m,poids(m));
    }
    else
    {
        printf("???\n");
    }
    return 0;
}
