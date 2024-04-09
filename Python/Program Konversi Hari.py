print("Program Konversi Hari")
print("visit us hobingoding.com")
print()
# Input Hari
hari = int(input("INPUT HARI : "))

# Konversi Hari
tahun = hari // 365
hari = hari % 365

bulan = hari // 30
hari %= 30

minggu = hari // 7
hari %= 7
print("HASIL : %d TAHUN %d BULAN %d MINGGU %d HARI"%(tahun, bulan, minggu, hari))