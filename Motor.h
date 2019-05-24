#include <string>
using std::string;
#ifndef MOTOR_H
#define MOTOR_H
    class Motor{
        private:
            string tipo;
            string configuracion;
        public:
            Motor(string,string);
            void setTipo(string);
            string geTipo();
            void setConfiguracion(string);
            string getConfiguracion();    
    };
    
        
#endif
