print("Program Mengecek Kata Palindrom atau Bukan Palindrom")
print("visit us @hobingoding.com")
print()
#Input Kata
kata = input("Input Kata : ")
temp = ""
#Balik Kata
for i in range(len(kata)-1, -1, -1): 
    temp+=kata[i]
print("Hasil : ", end="")
#Bandingkan Kata
if(kata == temp):
    print("Palindrom")
else:
    print("Bukan Palindrom")
