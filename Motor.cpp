#include"Motor.h"

Motor::Motor(string _tipo,string _configuracion){
    tipo=_tipo;
    configuracion=_configuracion;
}
void Motor:: setTipo(string _tipo){
    tipo=_tipo;    
}
string Motor::geTipo(){
    return tipo;
}
void Motor::setConfiguracion(string conf){
    configuracion=conf;
}
string Motor:: getConfiguracion(){
    return configuracion;
}
