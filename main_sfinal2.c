// #include <stdio.h>
#include <stdlib.h>
#include "main_sfinal2.h"
#include <stdio.h>

// konstruktor
void makansate(status*stat, int health){
    health(*stat) = health(*stat) - 10;
}
void belimakan(status*stat, int happiness, int money)
{
    happiness(*stat) = happiness(*stat) - 30;
    money(*stat) = money(*stat) - 10;
}
void bab(status*stat, int happiness, int health){
    happiness(*stat) = happiness(*stat) + 10;
    health(*stat) = health(*stat) + 5;
}
void pdkt(status*stat, int happiness, int money, int social){
    happiness(*stat) = happiness(*stat) + 20;
    money(*stat) = money(*stat) - 30;
    social(*stat) = social(*stat) + 15;
}
void mandi(status*stat, int hygiene, int health){
    hygiene(*stat) = hygiene(*stat) + 35;
    health(*stat) = health(*stat) + 35;
}
void ngamen(status*stat, int money, int social){
    money(*stat) = money(*stat) + 10;
    social(*stat) = social(*stat) + 10;
}
void ikut_uro(status*stat, int social){
    social(*stat) = social(*stat) + 20;
}
void rebahan(status*stat, int health, int happiness){
    health(*stat) = health(*stat) + 20;
    happiness(*stat) = happiness(*stat) + 25;
}
void ngewibu(status*stat, int social){
    social(*stat) = social(*stat) - 35;
}
void ke_dokter(status*stat, int health, int hygiene){
    health(*stat) = health(*stat) + 20;
    hygiene(*stat) = hygiene(*stat) + 35;
}
void cobabundir(status*stat, int health, int social){
    health(*stat) = health(*stat) - 35;
    social(*stat) = social(*stat) - 35;

}
void belajar(status*stat, int happiness){
    happiness(*stat) = happiness(*stat) - 15;
}
void display(status*stat, int happiness, int social, int hygiene, int health, int money){
    printf("Happiness : %i\n",happiness );
    printf("Social : %i\n",social );
    printf("Hygiene : %i\n",hygiene );
    printf("health : %i\n",health );
    printf("money : %i\n",money );
}
void opening(status*stat){
    printf("===     ===     ===========     ===              ============");
    printf("\n===     ===     ===     ===     ===              ============");
    printf("\n===     ===     ===     ===     ===              ===      ===");
    printf("\n===========     ===========     ===              ===      ===");
    printf("\n===========     ===========     ===              ===      ===");
    printf("\n===     ===     ===     ===     ===              ===      ===");
    printf("\n===     ===     ===     ===     ============     ============");
    printf("\n===     ===     ===     ===     ============     ============\n\n");


    printf("\n                   =======                      ");
    printf("\n                 == +   + ==                    ");
    printf("\n                 ==       ==                hilmy udah mulai dewasa dia harus bisa mandiri    ");//wasa dia harus bisa mandiri)
    printf("\n                 == |___| ==                    ");
    printf("\n\n                    =====                       ");
    printf("\n                |...=====...|                   ");
    printf("\n                    =====                        ");
    printf("\n                    =====                       ");
    printf("\n                    |   |                       ");
    printf("\n                    |   |                       ");
    printf("\n                    =   =                       \n\n");
}
void closing1(status*stat){
    printf("\n             ===============================            ");
    printf("\n             ===============================            ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |(ini tali)                       ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      =                                 ");
    printf("\n                     ===                                ");
    printf("\n                    =====                               ");
    printf("\n                  =========                             ");
    printf("\n                =============                           ");
    printf("\n                 == x   x ==(hilmy just dead)           ");
    printf("\n                 ==       ==                            ");
    printf("\n                 ==   0   ==                            ");
    printf("\n                    =====                               ");
    printf("\n                |...=====...|                           ");
    printf("\n                    =====                               ");
    printf("\n                    =====                               ");
    printf("\n                    |   |                               ");
    printf("\n                    |   |                               ");
    printf("\n                    =   =                               ");
    printf("\n                                                        ");
    printf("\n                                                        ");
    printf("\nini tanah                                               ");
    printf("\n=================================================       ");
    printf("\n=================================================       \n\n");

    printf("\t|\\      /| ------ ------- -----  \n");
    printf("\t| \\    / | |    |    |      |    \n");
    printf("\t|  \\  /  | |----|    |      |    \n");
    printf("\t|   \\/   | |    |    |      |    \n");
    printf("\t|        | |    |    |      |    \n");
    printf("\t|        | |    |    |    -----  \n");

    printf("\n\t|Maaf Anda telah mati!|\n\n");
    //Credits...
    printf("Terima kasih sudah main game kami :) \n");
    printf("Game ini telah di buat oleh: \nMuhammad Pudja Gemilang - 16019055 \n");
    printf("Muhammad Ilyas Irfan S. - 16519517 \n");
    printf("Zivanka Nafisa Wongkaren - 16919369 \n\n");
}
void closing2(status*stat){
    printf("||        ||  ||   ||        ||  \n");
    printf(" ||      ||  ||||   ||      || \n");
    printf("  ||    ||  ||  ||   ||    || \n");
    printf("   ||  ||  ||    ||   ||  ||    \n");
    printf("     ||   ||======||    ||   \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||     \n\n");
}