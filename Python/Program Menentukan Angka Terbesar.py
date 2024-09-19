print("Program Menentukan Angka Terbesar")
print("visit us hobingoding.com")
print()
# Fungsi Max Number
def maxNumber(a, b):
    if(a > b):
        return a
    elif(a < b):
        return b
    else:
        return "Sama"

# Input Angka
angka_1 = int(input("Input Angka-1 : "))
angka_2 = int(input("Input Angka-2 : "))
print("Hasil :", maxNumber(angka_1, angka_2))