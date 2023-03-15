prodotto=1
lista=[]
n= int(input('quanti numeri vuoi inserire?'))

for i in range (0,n):
    numeri = int(input('inserisci il numero: '))
    lista.append(numeri)

for numero in lista:
    prodotto = prodotto*numero

print(prodotto)
    
    
