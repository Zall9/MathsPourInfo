#include "tp1.h"

#define BIT(i, m) ((m)&1)
//#define WORDSIZE 32;

/*
 * renvoie le bit numéro 'i' d'un mot 'm'
 * question 1
 */
int WORDSIZE =32;
int bit(int i, mot m)
{
    return (m >> i) & 1;
}

/*
 * affiche les n bit de poids faible d'un mot
 * question 1
 */
void print_bin(mot m, int n)
{
    int i = n - 1;
    while (i >= 0)
    {
        printf("%d", (bit(i, m)));
        i--;
    }
}

/*
 * compte le nombre de 1 dans un mot
 * question 2
 */
int poids(mot m)
{
    int resultat = 0;
    for (int i = 0; i< WORDSIZE; i++)
    {
        if (m & 1)
            resultat += 1;
        m >>= 1;
    }
    return resultat;
}

/**********************************************************************
* Code de Golay avec parité
* matrice generatrice: I | G avec G
10101110001
11111001001
11010010101
11000111011.
11001101100.
01100110110.
00110011011.
10110111100.
01011011110.
00101101111.
10111000110.
01011100011
*********************************************************************/

/* question 3 */
mot golay_A[12] = {0x571, 0x7c9, 0x695, 0x63B, 0x66C, 0x336, 0x19B, 0x5BC, 0x2DE, 0x16F, 0x5C6, 0x2E3};

/*
 * code une suite de 12 bits (bits de poids faible d'un mot) en ajoutant la
 * redondance donnée par la matrice A
 * Le résultat (23 bits) est stocké dans les 23 bits de poid faible du mot
 * renvoyé.
 * question 3
 */
mot add(mot x, mot y)
{

    while (y != 0)
    {
        // carry now contains common set bits of x and y
        int carry = x & y;
        // Sum of bits of x and y where at least one of the bits is not set
        x = x ^ y;
        // Carry is shifted by one so that adding it to x gives the required sum
        y = carry << 1;
    }
    return x;
}
void initTabl(mot* tab){
    for(int i = 0; i <WORDSIZE; i++){
        tab[i] = 0;
    }
}
mot code_golay(mot entree)
{

    return 0;
}

/*
 * décode un mot du code de Golay en supprimant les bits de redondance
 * question 4
 */
mot decode_golay(mot m)
{
    // ...
    return 0;
}

/*
 * code de Golay étendu: 23 bit du code de Golay, avec un bit de parité
 * question 5
 */
mot code_golay_etendu(mot entree)
{
    // ...
    return 0;
}

/* matrice de partité */
/* question 6 */
mot golay_H[23]
    = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * syndrome d'un mot du code de Golay (sans bit de parité)
 * question 6
 */
mot syndrome_golay(mot m)
{
    // ...
    return 0;
}

/*
 * renvoie le décalage circulaire (à droite) de p bits sur un mot de n bits
 * question 7
 */
mot decalage_circulaire(mot m, int n, int p)
{
    // ...
    return m;
}

/*
 * correction d'erreur pour le code de Golay en utilisant la méthode "error
 * trapping" + cyclicité
 * question 8
 * question 9
 * question 10
 */
mot correction_golay(mot m)
{
    // ...
    return -1;
}

/*
 * correction d'erreur pour le code de Golay en utilisant la recherche exhaustive
 * question 11
 */
mot correction_exhaustive_golay(mot m)
{
    // ...
    return -1;
}
