#Simular el comportamiento de un sistema y los estados de los procesos a lo largo del tiempo en un ordenador ficticio configurado con un quantum de 100 ciclos y un cambio de contexto de 10 ciclos de reloj.
#Proceso 1: longitud de 400 instrucciones. 
#Proceso 2: longitud de 450 instrucciones y una operación de E/S al disco duro en la instrucción 140 y con una duración de 300 ciclos. 
#Proceso 3: longitud de 300 instrucciones y con una operación de transmisión de su buffer de datos a través de la red en la instrucción 120 y con una duración de 500 ciclos. 
#Proceso 4: longitud de 250 ciclos, y terminación por un error o excepción en la instrucción 240.

class CPU:
    def __init__(self,quantum,context):
        self.quantum=quantum
        self.context=context
    def run():
        pass
    def load():
        pass
    def cambio():
        pass

class Interrupcion:
    def __init__(self, inicio,duracion):
        self.inicio=inicio
        self.duracion=duracion

class Proceso:
    def __init__(self, longitud, interrupciones):
        self.longitud = longitud
        self.interrupciones=interrupciones

p1 = Proceso(400,[None])
p2 = Proceso(450,[Interrupcion(140,300)])
p3 = Proceso(300,[Interrupcion(120,500)])
p4 = Proceso(250,[Interrupcion(240,-1)])

