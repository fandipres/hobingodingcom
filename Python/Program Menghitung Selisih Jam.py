print("Program Menghitung Selisih Jam")
print("visit us hobingoding.com")
print()
# Input Jam Masuk
jam_masuk = input("Input Jam Masuk (HH.MM) : ")
# Input Jam Keluar
jam_keluar = input("Input Jam Keluar (HH.MM) : ")

# Pisahkan Jam dan Menit
menit_masuk = int(jam_masuk[3:5])
menit_keluar = int(jam_keluar[3:5])
jam_masuk = int(jam_masuk[0:2])
jam_keluar = int(jam_keluar[0:2])

# Hitung Selisih Jam dan Menit
selisih_jam = jam_keluar - jam_masuk
selisih_menit = menit_keluar - menit_masuk

# Kondisi Selisih Menit Negatif
if selisih_menit < 0:
    selisih_menit += 60
    selisih_jam -= 1

# Kondisi Selisih Jam Negatif
if selisih_jam < 0:
    selisih_jam += 24

# Format Output
format_jam = "0"+str(selisih_jam) if selisih_jam < 10 else str(selisih_jam)
format_menit = "0"+str(selisih_menit) if selisih_menit < 10 else str(selisih_menit)

print("Selisih Jam (HH.MM) : %s.%s" % (format_jam, format_menit))