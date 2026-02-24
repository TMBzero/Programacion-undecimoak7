reservas = []
cupos = 5

def hay_cupo(reservas, capacidad):
    
    while capacidad > 0:
        print(f"Cupos disponibles: {capacidad}")
        mensaje = input("Nombre (o 'salir'): ")
        if mensaje == "salir":
            break
        elif capacidad == 0:
            print(f"No quedan cupos disponibles")
        else:
            reservas += [f"-{mensaje}"]
            print("Reserva aceptada.")
            
        capacidad -= 1
        
    return reservas, capacidad


def mostrar_resumen(reservas, cupos):
    print(f"Reservas aceptadas: {5-cupos}/5")
    for i in reservas:
        print(i)




reservas, cupos = hay_cupo(reservas, cupos)
mostrar_resumen(reservas, cupos)
    

