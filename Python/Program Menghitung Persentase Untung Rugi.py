print("Program Menghitung Persentase Untung Rugi")
print("visit us hobingoding.com")
print()
persentase = 0
# Input Harga Jual
harga_jual = int(input("Input Harga Jual : "))
# Input Harga Beli
harga_beli = int(input("Input Harga Beli : "))

# Hitung Persentase
if(harga_jual > harga_beli):
    persentase = (harga_jual - harga_beli) / harga_beli * 100
    print("Hasil : Untung sebesar %.0f%%"%(persentase))
elif (harga_jual < harga_beli):
    persentase = (harga_beli - harga_jual) / harga_beli * 100
    print("Hasil : Rugi sebesar %.0f%%"%(persentase))
else:
    print("Hasil : Tidak untung maupun rugi")
