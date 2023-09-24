print("Program Menghitung Harga Jual Barang")
print("visit us hobingoding.com")
print()
# Input Harga Beli
harga_beli = int(input("Input Harga Beli : "))
# Input Opsi Perhitungan
print("Opsi Perhitungan : ")
print("1. Untung")
print("2. Rugi")
opsi = int(input("Input Opsi Perhitungan : "))
# Input Persentase
persen = int(input("Input Persentase Untung-Rugi : "))

# Hitung Harga Jual
if(opsi == 1):
    harga_jual = harga_beli+(harga_beli*persen/100)
    print("Harga Jual jika untung sebesar %s persen adalah %s"%(persen, harga_jual))
else:
    harga_jual = harga_beli-(harga_beli*persen/100)
    print("Harga Jual jika rugi sebesar %s persen adalah %s"%(persen, harga_jual))
