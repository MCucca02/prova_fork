#ifndef VERSIONE_PROCESSI_AUTOSTRADA_H
#define VERSIONE_PROCESSI_AUTOSTRADA_H

#include "rana.h"

#define L_STRADA 102
#define H_STRADA 6
#define STRADA_Y_MIN 16
#define STRADA_Y_MAX 21
#define DISTANZA 10



 typedef struct{
    int num_veicolo;
    pid_t pid;
    int x[2];
    int y[2];
    int l; // Lunghezza veicolo
    int h; // Altezza veicolo
    int corsia;
    char tipo;
    Verso vr;
}Veicolo;

typedef struct {
    int x[2];
    int y[2];
    int l; // Lunghezza autosatrada
    int h; // Altezza autostrada
    WINDOW *autostrada;
    Veicolo veicoli[N_VEICOLI];
} Autostrada;

Autostrada init_autostrada(WINDOW *autostrada);

void stampa_veicoli(WINDOW *game, Autostrada a);
void stampa_veicolo(WINDOW *game, Veicolo v);
Veicolo readVPipe(int p_in);
void writeVPipe(Veicolo v, int p_out);
Autostrada readSPipe(int p_in);
void writeSPipe(Autostrada strada, int p_out);


#endif //VERSIONE_PROCESSI_AUTOSTRADA_H
