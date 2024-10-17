#include <stdio.h>

int main() {
    // Εκτύπωση του ονόματος με έντονη γραφή (bold)
    printf("\033[1mMichael Jordan\033[0m\n");
    
    // Εκτύπωση του sdi αριθμού με αναβόσβησμα (blink)
    printf("\033[5msdi2300999\033[0m\n");
    
    // Εκτύπωση του τελικού μηνύματος με έντονη γραφή και προσθήκη emoji
    printf("\033[1mI'm 100%% \"ready\"! 😎🚀\033[0m\n");

    return 0;
}

// Μεταγλώττιση:
// gcc about_advanced.c -o about_advanced
// Εκτέλεση:
// ./about_advanced
// Έξοδος:
// Michael Jordan (με έντονη γραφή)
// sdi2300999
// I'm 100% "ready"! 😎🚀 (με έντονη γραφή)