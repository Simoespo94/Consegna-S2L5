#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta = '\0';
    menu();
    scanf(" %c", &scelta);

    switch (scelta) {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
    }

return 0;
}

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() {
    short int a = 0, b = 0;
    printf("Inserisci i due numeri da moltiplicare: ");
    scanf("%hd", &a);
    scanf("%hd", &b);

    short int prodotto = a * b;

    printf("Il prodotto tra %hd e %hd e': %hd\n", a, b, prodotto);
}

void dividi() {
    float a = 0, b = 0;
    printf("Inserisci il numeratore: ");
    scanf("%f", &a);
    printf("Inserisci il denominatore: ");
    scanf("%f", &b);

    if (b != 0) {
        int divisione = a / b;
        printf("La divisione tra %d e %d e': %d\n", a, b, divisione);
    } else {
        printf("Errore: divisione per zero.\n");
    }

    float divisione = a / b;
    printf("La divisione tra %.2f e %.2f e': %.2f\n", a, b, divisione);
}

void ins_string() {
    char stringa[100]; 
    printf("Inserisci la stringa: ");
    scanf("%s", stringa);
    printf("Hai inserito: %s\n", stringa);
}
