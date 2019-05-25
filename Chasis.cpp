#include"Chasis.h"

Chasis::Chasis(string ruedas,string t_transmision){
    tipo_ruedas=ruedas;
    transmision=t_transmision;

}
string Chasis::getRuedas(){
    return tipo_ruedas;
}
void Chasis::setRuedas(string ruedas){
    tipo_ruedas=ruedas;
}
string Chasis:: geTransmision(){
    return transmision;
}
void Chasis::seTransmision(string _transmision){
    transmision=_transmision;
}
