print("Program Mencetak Barisan Bilangan Ganjil Genap dalam Rentang Tertentu")
print("visit us hobingoding.com")
print()
# Input Nilai Awal
awal = int(input("Input Nilai Awal : "))
# Input Nilai Akhir
akhir = int(input("Input Nilai Akhir : "))

# Barisan Bilangan Genap
print("Bilangan Genap :", end=" ")
for i in range(awal  + 1, akhir + 1, 2):
    print(i, end=" ")

# Barisan Bilangan Ganjil
print("\nBilangan Ganjil :", end=" ")
for i in range(awal, akhir, 2):
    print(i, end=" ")