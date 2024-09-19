print("Program Mencetak N Huruf Pertama")
print("visit us hobingoding.com")
print()
# Inisiasi Nilai
huruf_kecil = 97
huruf_besar = 65

# Input Nilai
n = int(input("Input Nilai N : "))

if(n < 0 or n > 26):
    print("Maaf : Nilai N tidak sesuai jumlah alfabet (1-26)")
else:
    print("Lower Case :", end=" ")
    for i in range(n):
        print(chr(i + huruf_kecil), end=" ")
    print()
    print("Upper Case :", end=" ")
    for i in range(n):
        print(chr(i + huruf_besar), end=" ")