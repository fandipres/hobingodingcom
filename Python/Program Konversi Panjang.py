print("Program Konversi Panjang")
print("visit us hobingoding.com")
print()
# Opsi Satuan Panjang
opsi = ["km", "hm", "dam", "m", "dm", "cm", "mm"]

# Input Panjang
satuan_awal = input("Input Satuan Awal : ").lower()
satuan_akhir = input("Input Satuan Akhir : ").lower()
panjang = float(input("Input Nilai Panjang : "))

# Konversi Panjang
try:
    index_awal = opsi.index(satuan_awal)
    index_akhir = opsi.index(satuan_akhir)

    # Hitung Konversi
    faktor_konversi = 10 ** (index_akhir - index_awal)
    hasil_konversi = panjang * faktor_konversi
    print(f"Hasil : {panjang} {satuan_awal} = {hasil_konversi} {satuan_akhir}")
except ValueError:
    print("Maaf : Opsi tidak tersedia")