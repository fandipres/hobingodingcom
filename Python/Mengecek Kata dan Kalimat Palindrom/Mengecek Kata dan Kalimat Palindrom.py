print("Mengecek Kata Palindrom atau Bukan Palindrom")
print("visit us @hobingoding.com")
print()
kata = input("Input Kata : ")
temp = ""
for i in range(len(kata)-1, -1, -1): #Looping dari karakter / huruf terakhir
    temp+=kata[i]
print("Result : ", end="")
if(kata == temp): #Pengecekan kondisi dengan membandingkan kedua variabel
    print("Palindrom")
else:
    print("Bukan Palindrom")
