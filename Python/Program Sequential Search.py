print("Pencarian Data dengan Algoritma Sequential Search")
print("visit us hobingoding.com")
print()
ketemu = False
data = []
# Input Data
data = input("Input Data : ").split()

# Input Cari Data
cari = input("Input Cari Data : ")

# Algoritma Sequential Search
for i in range(len(data)):
    if(cari == data[i]):
        ketemu = True
        print("Hasil : Data ditemukan pada indeks ke-%d"%i)
        break

if(not(ketemu)):
    print("Hasil : Data tidak ditemukan")