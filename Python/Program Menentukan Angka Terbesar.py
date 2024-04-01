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
        return "Equal"

# Input Angka
angka_1 = int(input("INPUT ANGKA-1 : "))
angka_2 = int(input("INPUT ANGKA-2 : "))
print("HASIL :", maxNumber(angka_1, angka_2))