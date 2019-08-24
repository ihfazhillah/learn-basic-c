#include <stdio.h>


void main(){
    enum Weekday {Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Ahad};
    enum Weekday today = Jumat;

    switch(today){
        case Senin:
            printf("Sekarang adalah hari senin\n");
            break;
        case Selasa:
            printf("Sekarang adalah hari selasa\n");
            break;
        case Rabu:
            printf("Sekarang adalah hari rabu\n");
            break;
        case Kamis:
            printf("Sekarang adalah hari kamis\n");
            break;
        case Jumat:
            printf("Sekarang adalah hari jumat\n");
            break;
        case Sabtu:
            printf("Sekarang adalah hari sabtu\n");
            break;
        default:
            printf("Sekarang adalah hari ahad\n");
            break;
    }
}
