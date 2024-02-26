print("Program Mencetak Barisan Bilangan Ganjil Genap")
print("visit us hobingoding.com")
print()
# Input Nilai n
n = int(input("Input Nilai n : "))

# Barisan Bilangan Genap
print("Bilangan Genap :", end=" ")
for i in range(0, n+1, 2):
    print(i, end=" ")
    
# Barisan Bilangan Ganjil
print()
print("Bilangan Ganjil :", end=" ")
for i in range(1, n+1, 2):
    print(i, end=" ")