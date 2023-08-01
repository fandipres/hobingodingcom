print("Program Menghitung Harga Jual Barang")
print("visit us @hobingoding.com")
print()
harga_beli = int(input("Input Harga Beli : "))
print("Opsi Perhitungan : ")
print("1. Nominal Keuntungan")
print("2. Persentase Keuntungan")
opsi = int(input("Input Opsi Perhitungan : "))
untung = int(input("Input Untung : "))
if(opsi == 1):
    harga_jual = harga_beli+untung
    print("Harga Jual agar untung sebesar %s adalah %s"%(untung, harga_jual))
else:
    harga_jual = harga_beli+(harga_beli*untung/100)
    print("Harga Jual agar untung sebesar %s persen adalah %s"%(untung, harga_jual))
