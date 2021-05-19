"""
print("primeiro programa")

t1 = 3
t2 = 3.0
t3 = "3.0"
t4 = True

print(type(t1))
print(type(t2))
print(type(t3))
print(type(t4))
"""

msg1 = "meu nome é "
msg2 = "Vinícius"
RG = 40227419880
print("\nOlá " + msg1 + msg2 + ", meu RG é " + str(RG))

# OU

nome = "Vinicius"
MyRG = 40227419880
print("\nMeu nome é %s e meu RG é %s" %(nome, MyRG))
print("Meu nome é %s e meu RG é %d" %(nome, MyRG))

n1 = 5
n2 = 2
print("\n\t\tTotal " + str(n1 + n2)) # Primeiro acontece oq esta no parentes (a soma) depois vira String.