# Aula sobre listas

##############################################
print("\n")
list1 = [1, 5, 9, 23, 42]
print(list1)
print(len(list1)) # Tamanho da Lista.

##############################################
print("\n")
list1[1] = 105 # Substitui valor.
print(list1)

##############################################
print("\n")
list2 = [1, 5, 'python', 'vinicius', 'a', True, 3.5, 9.2] # No Problema
print(list2)
print(type(list2[3]))
print(list2[3])

##############################################
print("\n")
curso = "programação"
print(len(curso)) #Quantos caracteres?
print(curso)

##############################################
print("\n")
list3 = [5, 9, 3, 21]
list3.append(105) # Adicionar no final.
print(list3)

##############################################
print("\n")
list3 = [5, 9, 3, 21]
list3.insert(1, 203) # insert(na posiçao, numero) -- Não substitui valor.
print(list3)

##############################################
print("\n")

list3.sort() # Colocar em ordem crescente.
print(list3)

###############################################