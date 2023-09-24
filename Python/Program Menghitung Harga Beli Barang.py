print("Program Menghitung Harga Beli Barang")
print("visit us hobingoding.com")
print()
# Input Harga Jual
harga_jual = int(input("Input Harga Jual : "))
# Input Opsi Perhitungan
print("Opsi Perhitungan : ")
print("1. Untung")
print("2. Rugi")
opsi = int(input("Input Opsi Perhitungan : "))
# Input Persentase
persen = int(input("Input Persentase Untung-Rugi : "))

# Hitung Harga Beli
if(opsi == 1):
    harga_beli = harga_jual*(100/(100+persen))
    print("Harga Beli jika untung sebesar %s persen adalah %s"%(persen, harga_beli))
else:
    harga_beli = harga_jual*(100/(100-persen))
    print("Harga Beli jika rugi sebesar %s persen adalah %s"%(persen, harga_beli))
