#include<string>
using std::string;
#ifndef PINTURA_H
#define PINTURA_H
    class Pintura {
        private:
            string color;
            string acabado;
        public:
            Pintura(string,string);
            void setColor(string);
            string getColor();
            void setAcabado(string);
            string getAcabado();   
    };

#endif