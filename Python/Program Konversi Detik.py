print("Program Konversi Detik")
print("visit us hobingoding.com")
print()
# Input Detik
detik = int(input("Input Detik : "))

# Konversi Detik
hari = detik // 86400
detik = detik % 86400

jam = detik // 3600
detik %= 3600

menit = detik // 60
detik %= 60
print(f"Hasil : {hari} Hari {jam} Jam {menit} Menit {detik} Detik")