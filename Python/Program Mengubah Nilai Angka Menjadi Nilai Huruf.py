print("Program Mengubah Nilai Angka Menjadi Nilai Huruf")
print("visit us hobingoding.com")
print()
# Input Nilai
nilai = int(input("Input Nilai : "))

# Ubah Nilai
if(nilai > 84 and nilai <= 100):
    print("Nilai Huruf : A")
elif(nilai > 79 and nilai <= 84):
    print("Nilai Huruf : A-")
elif(nilai > 74 and nilai <= 79):
    print("Nilai Huruf : B+")
elif(nilai > 69 and nilai <= 74):
    print("Nilai Huruf : B")
elif(nilai > 64 and nilai <= 69):
    print("Nilai Huruf : B-")
elif(nilai > 59 and nilai <= 64):
    print("Nilai Huruf : C+")
elif(nilai > 49 and nilai <= 59):
    print("Nilai Huruf : C")
elif(nilai > 39 and nilai <= 49):
    print("Nilai Huruf: D")
elif(nilai > 0 and nilai <= 39):
    print("Nilai Huruf : E")
else:
    print("Maaf : Masukan Anda salah")