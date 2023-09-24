print("Program Mengecek Kata dan Kalimat Palindrom")
print("visit us hobingoding.com")
print()
# Input Kata
kata = input("Input Kata : ")
temp = ""

# Balik Kata
for i in range(len(kata)-1, -1, -1): 
    temp += kata[i]

# Cek Palindrom
if(kata == temp):
    print("Hasil : Palindrom")
else:
    print("Hasil : Bukan Palindrom")
