print("Program Konversi Massa")
print("visit us hobingoding.com")
print()
# Opsi Satuan Massa
opsi = ["kg", "hg", "dag", "g", "dg", "cg", "mg"]

# Input Massa
satuan_awal = input("Input Satuan Awal : ").lower()
satuan_akhir = input("Input Satuan Akhir : ").lower()
massa = float(input("Input Nilai Massa : "))

# Konversi Massa
try:
    index_awal = opsi.index(satuan_awal)
    index_akhir = opsi.index(satuan_akhir)

    # Hitung Konversi
    faktor_konversi = 10 ** (index_akhir - index_awal)
    hasil_konversi = massa * faktor_konversi
    print(f"Hasil : {massa} {satuan_awal} = {hasil_konversi} {satuan_akhir}")
except ValueError:
    print("Maaf: Opsi tidak tersedia")