print("Program Mencetak n Huruf Pertama")
print("visit us hobingoding.com")
print()
# Inisiasi Nilai
huruf_kecil = 97
huruf_besar = 65

# Input Nilai
n = int(input("INPUT NILAI N : "))

if(n < 0 or n > 26):
    print("MAAF : NILAI N TIDAK SESUAI JUMLAH ALFABET (1-26)")
else:
    print("LOWER CASE :", end=" ")
    for i in range(n):
        print(chr(i + huruf_kecil), end=" ")
    print()
    print("UPPER CASE :", end=" ")
    for i in range(n):
        print(chr(i + huruf_besar), end=" ")
