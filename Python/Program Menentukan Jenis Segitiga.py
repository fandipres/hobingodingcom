print("Program Menentukan Jenis Segitiga")
print("visit us hobingoding.com")
print()
# Input Opsi
print("Opsi Jenis Segitiga : ")
print("1. Sisi")
print("2. Sudut")
opsi = input("Input Opsi Jenis Segitiga : ")

# Opsi Jenis Segitiga
if(opsi == "1"):
    sisi_1 = int(input("Input Sisi-1 : "))
    sisi_2 = int(input("Input Sisi-2 : "))
    sisi_3 = int(input("Input Sisi-3 : "))
    if(sisi_1 == sisi_2 == sisi_3):
        print("Hasil : Segitiga Sama Sisi")
    elif(sisi_1 == sisi_2 or sisi_1 == sisi_3 or sisi_2 == sisi_3):
        print("Hasil : Segitiga Sama Kaki")
    else:
        print("Hasil : Segitiga Sembarang")
elif(opsi == "2"):
    sudut_1 = int(input("Input Sudut-1 : "))
    sudut_2 = int(input("Input Sudut-2 : "))
    sudut_3 = int(input("Input Sudut-3 : "))
    if(sudut_1 < 90 and sudut_2 < 90 and sudut_3 < 90):
        print("Hasil : Segitiga Lancip")
    elif(sudut_1 > 90 or sudut_2 > 90 or sudut_3 > 90):
        print("Hasil : Segitiga Tumpul")
    elif(sudut_1 == 90 or sudut_2 == 90 or sudut_3 == 90):
        print("Hasil : Segitiga Siku-siku")