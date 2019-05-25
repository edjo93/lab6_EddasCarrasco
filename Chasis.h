#include<string>
using std::string;

#ifndef CHASIS_H
#define CHASIS_H
    class Chasis{
        private:
            string tipo_ruedas;
            string transmision;
        public:
            Chasis(string,string);    
            string getRuedas();
            void setRuedas(string);
            string geTransmision();
            void seTransmision(string);

    };
#endif
