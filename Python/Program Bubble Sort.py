print("Pengurutan Data dengan Algoritma Bubble Sort")
print("visit us @hobingoding.com")
print()
#Input Banyak Data
banyakData = int(input("Input Banyak Data : "))
data = []
#Input Data
print("Data yang Belum Terurut :")
for i in range(0, banyakData):
    data.append(int(input()))
#Algoritma Bubble Sort
for i in range(0, banyakData):
    for j in range(0, banyakData-i-1):
        if(data[j] > data[j+1]):
            tmp = data[j]
            data[j] = data[j+1]
            data[j+1] = tmp
#Output Data
print("Hasil Pengurutan Data :", data)
