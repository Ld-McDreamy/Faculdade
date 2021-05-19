# 8. (Desafio) FaÃ§a um programa que apresenta a tabuada completa de 1 a 10.

import os
os.system('cls') # Limpar o Terminal .
os.system('color 3') # MudanÃ§a na cor das letras (Azul).

for x in range(1,11):
    print("")
    print("âââââââââââââââââ")
    print("ââº  Tabuada %2d ââ" %(x))

    for y in range(0,11):
        print("â %2d * %2d = %3d â" %(x, y, (x*y)))
        
        if y == 10:
            print("ââââââââââââââââ▀â")
