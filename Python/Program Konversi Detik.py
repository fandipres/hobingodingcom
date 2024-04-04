print("Program Konversi Detik")
print("visit us hobingoding.com")
print()
# Input Detik
detik = int(input("INPUT DETIK : "))

# Konversi Detik
hari = detik // 86400
detik = detik % 86400

jam = detik // 3600
detik %= 3600

menit = detik // 60
detik %= 60
print("HASIL : %d HARI %d JAM %d MENIT %d DETIK"%(hari, jam, menit, detik))