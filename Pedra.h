#ifndef Pedra_h
#define Pedra_h
class Pedra {
	int n1; // um naipe
	int n2; // outro naipe
    public:
        int getNaipe(int index);
        void setNaipes(int x, int y);
        int pontosNaPedra();
};
#endif