print("Program Menghitung Luas Permukaan Balok")
print("visit us hobingoding.com")
print()
# Input Panjang
panjang = int(input("Input Panjang : "))
# Input Lebar
lebar = int(input("Input Lebar : "))
# Input Tinggi
tinggi = int(input("Input Tinggi : "))

# Hitung Luas Permukaan
luas_permukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi))
print("Luas Permukaan Balok :", luas_permukaan)