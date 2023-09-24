print("Program Menghitung Jumlah Huruf dan Angka")
print("visit us hobingoding.com")
print()
huruf_besar = 0
huruf_kecil = 0
huruf_vokal = 0
huruf_konsonan = 0
spasi = 0
angka = 0
# Input Kalimat
kalimat = input("Input Kalimat : ")
for i in range(0, len(kalimat)):
    # Hitung Huruf dan Angka
    huruf_konsonan += 1
    if(kalimat[i] >= 'A' and kalimat[i] <= 'Z'):
        huruf_besar += 1
    if(kalimat[i] >= 'a' and kalimat[i] <= 'z'):
            huruf_kecil += 1
    if(kalimat[i].upper() == 'A' or kalimat[i].upper() == 'I' or kalimat[i].upper() == 'U' or kalimat[i].upper() == 'E' or kalimat[i].upper() == 'O'):
            huruf_vokal += 1
    if(kalimat[i] == ' '):
            spasi += 1
    if(kalimat[i] >= '0' and kalimat[i] <= '9'):
            angka += 1
huruf_konsonan -= (spasi + angka + huruf_vokal)

print("Hasil Penghitungan :")
print("Kapital :", huruf_besar)
print("Non-Kapital :", huruf_kecil)
print("Vokal :", huruf_vokal)
print("Konsonan :", huruf_konsonan)
print("Angka :", angka)
print("Spasi :", spasi)
