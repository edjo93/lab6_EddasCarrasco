#include"Pintura.h"
Pintura::Pintura(string _color,string _acabado){
    color=_color;
    acabado=_acabado;
}
void Pintura::setColor(string _color){
    color=_color;

}
string Pintura:: getColor(){
    return color;
}
void Pintura:: setAcabado(string _acabado){
    acabado=_acabado;
}
string Pintura:: getAcabado(){
    return acabado;
}
