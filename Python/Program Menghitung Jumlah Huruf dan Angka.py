print("Program Menghitung Jumlah Karakter")
print("visit us @hobingoding.com")
print()
hurufBesar = 0
hurufKecil = 0
hurufVokal = 0
hurufKonsonan = 0
spasi = 0
angka = 0
kalimat = input("Input Kalimat : ")
for i in range(0, len(kalimat)):
    hurufKonsonan+=1
    if(kalimat[i] >= 'A' and kalimat[i] <= 'Z'):
        hurufBesar+=1
    if(kalimat[i] >= 'a' and kalimat[i] <= 'z'):
            hurufKecil+=1
    if(kalimat[i].upper() == 'A' or kalimat[i].upper() == 'I' or kalimat[i].upper() == 'U' or kalimat[i].upper() == 'E' or kalimat[i].upper() == 'O'):
            hurufVokal+=1
    if(kalimat[i] == ' '):
            spasi+=1
    if(kalimat[i] >= '0' and kalimat[i] <= '9'):
            angka+=1
hurufKonsonan -= (spasi + angka + hurufVokal)
print("Hasil Penghitungan :")
print("Kapital     : ", hurufBesar)
print("Non-Kapital : ", hurufKecil)
print("Vokal       : ", hurufVokal)
print("Konsonan    : ", hurufKonsonan)
print("Angka       : ", angka)
print("Spasi       : ", spasi)
